//A. Nearly Square

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,m,c=0;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&m);
        long long a=(long long)sqrt(m);
        long long b=(long long)sqrt(m)+1;
        long long k1=(a)*(a)-m;
        long long k2=(b)*(b)-m;
        if(abs(k1)<abs(k2))
            printf("Case %lld: %lld %lld\n",++c,a,k1);
        else
            printf("Case %lld: %lld %lld\n",++c,b,k2);
    }
    return 0;
}*/


//D. Professor Xuan

#include<bits/stdc++.h>
using namespace std;

int rev(int n)
{
    int num=0;
    while(n!=0){
        num=(num*10)+n%10;
        n/=10;
    }
    return num;
}

int func(int n)
{
    if(n==0) return 0;
    return abs(n-rev(n))+func(abs(n-rev(n)));
}

int main()
{
    int t,m,c=0,k,arr[1050];
    for(int i=0; i<1005; i++){
        arr[i]=func(i);
    }
    int mo=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&m);
        k=0;
        for(int j=0; j<=m; j++)
            if(arr[j]>k) k=arr[j];
        cout<<k<<endl;
    }
    return 0;
}

