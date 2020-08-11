/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

int main()
{
    printf("I Love Programming\n");
    return 0;
}
*/

/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

long long int intSort(const long long int *a, const long long int *b)
{
    return (*a-*b);
}

int main()
{
    long long int t,n,m,a,b,i,c=0,arr[111];
    scanf("%lld",&t);
    while(t--)
    {
        a=b=0;
        scanf("%lld %lld",&n,&m);
        for(i=0; i<n; i++)
        {
            scanf("%lld",&arr[i]);
        }
        qsort(arr,n,sizeof(long long int),(long long int (*)(const void*, const void*))intSort);
        for(i=0; i<m; i++)
        {
            a+=arr[i];
        }
        for(i=n-1; i>n-m-1; i--)
        {
            b+=arr[i];
        }
        printf("Case %lld: %lld %lld\n",++c,b,a);
    }
    return 0;
}
*/

/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

int intSort(const int *a, const int *b)
{
    return (*a-*b);
}

int main()
{
    int t,c=0;
    double n,a;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf",&n);
        a=pow(n/2,2)*2;
        printf("Land %d: %.5f\n",++c,a);
    }
    return 0;
}
*/

/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

int intSort(const int *a, const int *b)
{
    return (*a-*b);
}

int main()
{
    int t,n,m,p,a,i,c=0,arr[30];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&n,&m,&p);
        arr[0]=n,arr[1]=m;
        a=m+n;
        for(i=2; i<p; i++)
        {
            arr[i]=arr[i-1]+arr[i-2];
            a+=arr[i];
        }
        printf("Case %d: %d\n",++c,a);
    }
    return 0;
}
*/
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

int main()
{
    int t,n,m,p,a,i,j,k,c=0,arr[30];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            if(i==0)
                printf("    ||    ");
            else if(i==1)
                printf("  | || |  ");
            else
                printf("| | || | |");
            printf("\n");
        }
    }
    return 0;
}
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

long long int intSort(const long long int *a, const long long int *b)
{
    return (*a-*b);
}

int main()
{
    long long int n,i,arr[1010],count;
    while(scanf("%I64d",&n)==1)
    {
        count=2;
        printf("%lld\n",n);
        for(i=0; i<n; i++)
        {
            scanf("%I64d",&arr[i]);
        }
        for(i=0; i<n; i++)
        {
            printf("%I64\n",arr[0]);
        }
        /*qsort(arr,n,sizeof(long long int),(long long int (*)(const void*, const void*))intSort);
        for(i=2; i<n; i++)
        {
            if(arr[i]==arr[i-1]+arr[i-2])
                ++count;
            else
                break;
            printf("%lld %lld %lld\n",arr[i],arr[i-1],arr[i-2]);
        }
        printf("%lld\n",count);*/
    }
    return 0;
}


