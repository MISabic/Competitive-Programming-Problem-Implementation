/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<assert.h>

#define pf printf
#define sf scanf
#define ll long long int
#define epsilon 0.000000001
#define pi acos(-1)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
#define fequal(a,b) fabs(a-b)<epsilon
#define lcm(a,b) (a*b)/gcd(a,b)

int main()
{
    int t,n,arr[100000],i,flag,c,j;
    sf("%d",&t);
    while(t--){
        sf("%d",&n);
        for(i=0; i<n; i++)
            sf("%d",&arr[i]);
        arr[i]=arr[i-1];
        flag=0;c=1;
        for(i=0; i<n; i++){
            for(j=i; j<n; j++){
                if(arr[j]>0 && arr[j+1]>0 || arr[j]<0 && arr[j+1]<0 || j==n-1){
                    printf("%d",c);
                    if(i!=n-1) printf(" ");
                    else printf("\n");
                    while(c!=1){
                        printf("%d",--c);
                        ++i;
                        if(i!=n-1) printf(" ");
                        else printf("\n");
                    }
                    c=1;
                    break;
                }
                else{
                    ++c;
                }
            }
        }
    }
    return 0;
}*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<assert.h>

#define pf printf
#define sf scanf
#define ll long long int
#define epsilon 0.000000001
#define pi acos(-1)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
#define fequal(a,b) fabs(a-b)<epsilon
#define lcm(a,b) (a*b)/gcd(a,b)

int palin(int n)
{
    int reverse = 0, temp;
    temp = n;
    while( temp != 0 )
    {
       reverse = reverse * 10;
       reverse = reverse + temp%10;
       temp = temp/10;
    }
    if ( n == reverse )
       return 0;
    else
       return 1;
}

int main()
{
    int t,h,m,i,j,c;
    sf("%d",&t);
    while(t--){
            c=0;
        sf("%d %d",&m,&h);
        for(i=0; i<m; i++){
            for(j=0; j<h; j++){
                if(palin(i)==0 && palin(j)==0){
                    if(i%10==j%10 || i%10==j || i==j%10){
                        ++c;
                    }
                }
            }
        }
        pf("%d\n",c);
    }
    return 0;
}
