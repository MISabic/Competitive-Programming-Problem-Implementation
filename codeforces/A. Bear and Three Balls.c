#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<assert.h>

#define long long int ll
#define epsilon 0.000000001
#define pi acos(-1)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
#define fequal(a,b) fabs(a-b)<epsilon
#define lcm(a,b) (a*b)/gcd(a,b)

int intSort(const int *a, const int *b)
{
    return (*a-*b);
}

int main()
{
    int n,arr[100],i,j,l,flag,count;
    while(scanf("%d",&n)==1){
        for(i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }
        qsort(arr, n, sizeof(int), (int (*)(const void*, const void*))intSort);
        for(i=0; i<n; i++){
            flag=0;
            for(j=i; j<n; j++){
                if(arr[j]==arr[i]+1){
                    for(l=j; l<n; l++){
                        if(arr[l]==arr[j]+1){
                            printf("YES\n");
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag==1) break;
            }
            if(flag==1) break;
        }
        if(flag==0)
            printf("NO\n");
    }
    return 0;
}
