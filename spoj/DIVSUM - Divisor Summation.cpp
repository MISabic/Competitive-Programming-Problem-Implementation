#include<cstdio>
#include<cmath>

int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int c=1,s=sqrt(n);
        for(int i=2; i<=s; i++)
            if(n%i==0)
                c+=i+((i!=n/i)?(n/i):0);
        (n!=1)?printf("%d\n",c):printf("0\n");
    }
    return 0;
}
