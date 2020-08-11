/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#define max(a,b) (a>b ? a:b)

int intSort(const int *a, const int *b)
{
    return (*a-*b);
}

int main()
{
    int t,i;
    double arr[30],p,s,brr[30],a,b,c1,c2;
    scanf("%d",&t);
    while(t--)
    {
        c1=.5,c2=.5;
        for(i=0; i<3; i++)
            scanf("%lf %lf",&arr[2*i],&arr[2*i+1]);

        brr[0]=sqrt(pow((arr[0]-arr[2]),2)+pow((arr[1]-arr[3]),2));
        brr[1]=sqrt(pow((arr[0]-arr[4]),2)+pow((arr[1]-arr[5]),2));
        brr[2]=sqrt(pow((arr[2]-arr[4]),2)+pow((arr[3]-arr[5]),2));

        for(i=3; i<6; i++)
            scanf("%lf %lf",&arr[2*i],&arr[2*i+1]);

        brr[3]=sqrt(pow((arr[6]-arr[8]),2)+pow((arr[7]-arr[9]),2));
        brr[4]=sqrt(pow((arr[6]-arr[10]),2)+pow((arr[7]-arr[11]),2));
        brr[5]=sqrt(pow((arr[8]-arr[10]),2)+pow((arr[9]-arr[11]),2));

        a=max(brr[2],max(brr[0],brr[1]));
        b=max(brr[5],max(brr[3],brr[4]));

        for(i=0; i<3; i++)
        {
            if(brr[i]!=a)
                c1*=brr[i];
        }
        for(i=3; i<6; i++)
        {
            if(brr[i]!=b)
                c2*=brr[i];
        }
        for(i=0; i<4; i++)
            scanf("%lf %lf",&arr[2*i],&arr[2*i+1]);
        brr[0]=sqrt(pow((arr[0]-arr[2]),2)+pow((arr[1]-arr[3]),2));
        brr[1]=sqrt(pow((arr[2]-arr[4]),2)+pow((arr[3]-arr[5]),2));
        brr[2]=sqrt(pow((arr[4]-arr[6]),2)+pow((arr[5]-arr[7]),2));
        brr[3]=sqrt(pow((arr[0]-arr[6]),2)+pow((arr[1]-arr[7]),2));
        qsort(brr, sizeof(brr)/sizeof(double), sizeof(double), (int (*)(const void*, const void*))intSort);

        if((brr[0]*brr[3])==(c1+c2))
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}*/

/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#define max(a,b) (a>b ? a:b)

int main()
{
    int t,a,b,n,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        n=b;
        for(i=a; i>0; i--)
        {
            n=(n*(n+1))/2;
        }
        printf("%d\n",n);
    }
    return 0;
}*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#define max(a,b) (a>b ? a:b)

int main()
{
    int t,a,b,n,flag,c,d;
    scanf("%d",&t);
    while(t--)
    {
        flag=0,c=1,d=1;
        scanf("%d %d",&a,&b);
        if(a==1 && b==1)
        {
            printf("Vanya\n");
            continue;
        }
        while(1)
        {
            if(flag==0)
            {
                if(c+3<=a)
                {
                    c=c+3;
                }
                else if(c+2<=a)
                {
                    c=c+2;
                }
                else if(c+1<=a)
                {
                    c=c+1;
                }
                else if(d+2<=b)
                {
                    d=d+2;
                }
                else if(d+1<=b)
                {
                    d=d+1;
                }
                flag=1;
                printf("++%d %d\n",c,d);
                if(c==a && d==b)
                    break;
            }
            else
            {
                if(c+3<=a)
                {
                    c=c+3;
                }
                else if(c+2<=a)
                {
                    c=c+2;
                }
                else if(c+1<=a)
                {
                    c=c+1;
                }
                else if(d+2<=b)
                {
                    d=d+2;
                }
                else if(d+1<=b)
                {
                    d=d+1;
                }
                flag=0;
                printf("@@%d %d\n",c,d);
                if(c==a && d==b)
                    break;
            }
        }
        if(flag==1)
            printf("Tuzik\n");
        else
            printf("Vanya\n");
    }
    return 0;
}
