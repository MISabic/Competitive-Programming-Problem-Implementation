#include<bits/stdc++.h>
using namespace std;

double arr[1000010];

int main()
{
    int c,n,b;
    arr[1]=log10(1);
    for(int i=2; i<=1000005; i++)
        arr[i]=arr[i-1]+log10(i);

    scanf("%d",&c);
    for(int i=1; i<=c; i++){
        double res=0;
        scanf("%d %d",&n,&b);
        long long numOfDigits=floor(arr[n]/log10(b))+1;
        printf("Case %d: %lld\n",i,numOfDigits);
    }
    return 0;
}
