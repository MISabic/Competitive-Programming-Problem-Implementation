/*#include<stdio.h>
int main()
{
    int i,j,k,n,m,p,q,arr[1000][2];
    scanf("%d",&n);
    printf("\n");
    for(m=0; m<n; m++)
    {
        scanf("%d",&arr[m][0]);
        scanf("%d",&arr[m][1]);
        printf("\n");
    }
    p=arr[m-1][1];
    m=0;
    q=n;
    if(n>0)
    while(n!=0)
    {
        if(n!=q)
            printf("\n");
        if(arr[m][0]<10)
            for(i=0; i<arr[m][1]; i++)
            {
                for(j=1; j<=arr[m][0]; j++)
                {
                    for(k=1; k<=j; k++)
                    {
                        printf("%d",j);
                    }
                    if(arr[m][0]==1 && i+1==arr[m][1] && n==1)
                        ;
                    else
                        printf("\n");
                }
                for(j=arr[m][0]-1; j>=1; j--)
                {
                    for(k=1; k<=j; k++)
                    {
                        printf("%d",j);
                    }
                    if(i+1==p && j==1 && n==1)
                        ;
                    else
                        printf("\n");
                }
                if(i!=arr[m][1]-1)
                    printf("\n");
            }
        else
            return 0;
        ++m;
        --n;
    }
    else
        return 0;
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int i,j,k,n,m,a,amp,freq;
    scanf("%d",&n);
    printf("\n");
    for(a=0; a<n; a++)
    {
        scanf("%d %d",&amp,&freq);
        m=freq;
        if(a!=n)
            printf("\n");
        if(amp<10)
            for(i=0; i<freq; i++)
            {
                for(j=1; j<=amp; j++)
                {
                    for(k=1; k<=j; k++)
                    {
                        printf("%d",j);
                    }
                if(amp==1 && i+1==freq && a==n)
                    ;
                else
                    printf("\n");
                }
                for(j=amp-1; j>=1; j--)
                {
                    for(k=1; k<=j; k++)
                    {
                        printf("%d",j);
                    }
                    if(a+1==n && j==1 && i+1==m)
                        ;
                    else
                        printf("\n");
                }
                if(i+1==m && a+1==n)
                    ;
                else
                    printf("\n");
            }
        else
            return 0;
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int i,j,k,n,m,a,amp,freq;
    scanf("%d",&n);
    for(a=0; a<n; a++)
    {
        scanf("%d %d",&amp,&freq);
        m=freq;
        for(i=0; i<freq; i++)
        {
            for(j=1; j<=amp; j++)
            {
                for(k=1; k<=j; k++)
                {
                    printf("%d",j);
                }
                printf("\n");
            }
            for(j=amp-1; j>=1; j--)
            {
                for(k=1; k<=j; k++)
                {
                    printf("%d",j);
                }
                printf("\n");
            }
            if(i+1==freq && a+1==n)
                ;
            else
            printf("\n");
        }
    }
    return 0;
}
