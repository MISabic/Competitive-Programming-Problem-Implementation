#include<stdio.h>
#include<string.h>

int main()
{
    long long int t,date1,year1,date2,year2,i,c=0,year,keep,n;
    char arr[15],brr[15];
    scanf("%lld",&t);
    while(t--)
    {
        n=0;
        scanf("%s %lld, %lld",arr,&date1,&year1);
        scanf("%s %lld, %lld",brr,&date2,&year2);
        for(i=year1; i<=year2; i++)
        {
            if(i%4==0)
            {
                n=1;
                year=year2-i;
                n+=(year/4);
                break;
            }
        }
        for(i=year1; i<=year2; i++)
        {
            if(i%100==0)
            {
                keep=1;
                year=year2-i;
                keep+=(year/100);
                if(n!=0)
                    n=n-keep;
                break;
            }
        }
        for(i=year1; i<=year2; i++)
        {
            if(i%400==0)
            {
                keep=1;
                year=year2-i;
                keep+=(year/400);
                n=n+keep;
                break;
            }
        }
        if(year1%4==0 && year1%100!=0 || year1%400==0)
        {
            if(strcmp(arr,"January")==0 || strcmp(arr,"February")==0 && date1<=29)
                ;
            else
                --n;
        }
        if((year2%4==0 && year2%100!=0 || year2%400==0) && (strcmp(brr,"January")==0 || (strcmp(brr,"February")==0 && date2<29)))
            --n;
        printf("Case %lld: %lld\n",++c,n);
    }
    return 0;
}


/*#include<stdio.h>

int main()
{
    long long int i,count=0;
    for(i=2900; i<=3004; i+=4)
    {
        if(i%4==0 && i%100!=0 || i%400==0)
        {
            //printf("%d\n",i);
            ++count;
        }
    }
    printf("%d\n",count);
    return 0;
}*/










