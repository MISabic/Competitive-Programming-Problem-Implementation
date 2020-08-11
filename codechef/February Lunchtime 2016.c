#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main()
{
    long long int a,b,c,r,k;
    while(scanf("%lld %lld %lld",&a,&b,&c)==3)
    {
        r=c-a;
        if(r==0 || r<b){
            printf("Unlucky Chef\n");
            continue;
        }
        r=r/b;
        if(r%2==0)
            printf("Lucky Chef\n");
        else
            printf("Unlucky Chef\n");
    }
    return 0;
}


/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main()
{
    int n,k1,i,j,k,l,m,p,q,r,t,flag,count,nar,sas;
    char arr[25][25];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k1);
        if(n<k1)
        {
            printf("NO\n");
            continue;
        }
        flag=nar=sas=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf(" %c",&arr[i][j]);
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(arr[i][j]=='.')
                {
                    count=1;
                    nar=sas=0;
                    m=i,p=i;
                    while(1)
                    {
                        if(nar==1 && sas==1)
                            break;
                        if(nar!=1){
                        if(arr[--m][j]=='X')
                            ++count;
                        else
                            nar=1;
                        }
                        if(sas!=1){
                        if(arr[++p][j]=='X')
                            ++count;
                        else
                            sas=1;
                        }
                    }
                    if(count>=k1)
                    {
                        printf("YES\n");
                        flag=1;
                        break;
                    }


                    count=1;
                    nar=sas=0;
                    m=j,p=j;
                    while(1)
                    {
                        if(nar==1 && sas==1)
                            break;
                        if(nar!=1){
                        if(arr[i][--m]=='X')
                            ++count;
                        else
                            nar=1;
                        }
                        if(sas!=1){
                        if(arr[i][++p]=='X')
                            ++count;
                        else
                            sas=1;
                        }
                    }
                    if(count>=k1)
                    {
                        printf("YES\n");
                        flag=1;
                        break;
                    }

                    count=1;
                    nar=sas=0;
                    m=i,p=j,q=i,r=j;
                    while(1)
                    {
                        if(nar==1 && sas==1)
                            break;
                        if(nar!=1){
                        if(arr[--m][--p]=='X')
                            ++count;
                        else
                            nar=1;
                        }
                        if(sas!=1){
                        if(arr[++q][++r]=='X')
                            ++count;
                        else
                            sas=1;
                        }
                    }
                    if(count>=k1)
                    {
                        printf("YES\n");
                        flag=1;
                        break;
                    }

                    count=1;
                    nar=sas=0;
                    m=i,p=j,q=i,r=j;
                    while(1)
                    {
                        if(nar==1 && sas==1)
                            break;
                        if(nar!=1){
                        if(arr[--m][++p]=='X')
                            ++count;
                        else
                            nar=1;
                        }
                        if(sas!=1){
                        if(arr[++q][--r]=='X')
                            ++count;
                        else
                            sas=1;
                        }
                    }
                    if(count>=k1)
                    {
                        printf("YES\n");
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==1)
                break;
        }
        if(flag==0)
            printf("NO\n");
    }
    return 0;
}
*/
