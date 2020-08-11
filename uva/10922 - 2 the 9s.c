/*#include<stdio.h>
#include<string.h>

int main()
{
    char word[1000000];
    long int n;
    while(scanf("%s",word)==1)
    {
        printf("%ld\n",strlen(word));
    }
}*/


int main()
{
    char a[1002];
    int s,d,i,j,k,l,q;
    int w;
    while(scanf("%s",a)==1)
    {
        l=strlen(a);

        if(l==1&&a[0]=='0')return 0;

        s=0;
        for(i=0;i<l;i++)
        s+=a[i]-48;

        if(s%9==0)w=1;
        else w=0;

        j=1;q=0;d=s;

        if(w==1)
        while(d!=9&&d>9)
        {q=0;

            while(d!=0)
            {
                printf("%d %d\n",q,d);
             q+=d%10;
             d=d/10;
            }
                printf("%d %d\n",q,d);
            printf("\n");
            d=q;

        j++;
        }

        if(w==1)
        printf("%s is a multiple of 9 and has 9-degree %d.\n",a,j);
        else if(w==0)
        printf("%s is not a multiple of 9.\n",a);

    }

    return 0;
}
