#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long
#define MAX 5000005

ll phi[MAX];

void square()
{
    ll i;
    phi[2]=2;
    for(i=3; i<MAX; i++)
        phi[i]=(phi[i]*phi[i])+phi[i-1];
}

void euler_totient()
{
    ll i,j;
    memset(phi,0,sizeof(phi));
    phi[1]=1;
    for(i=2; i<MAX; i++){
        if(!phi[i]){
            phi[i]=i-1;
            for(j=(i<<1); j<MAX; j+=i){
                if(!phi[j]) phi[j]=j;
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
    square();
}

int main()
{
    euler_totient();
    int t,a,b,c=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        printf("Case %d: %llu\n",++c,(phi[b]-phi[a-1]));
    }
    return 0;
}
