#include<bits/stdc++.h>
#define ll long long
#define len str.length()
#define debug cout<<"hello"<<endl
#define debug1(x,y) cout<<x<<"   hello    "<<y<<endl
#define debug1(x,y,z) cout<<x<<"   rasengan    "<<y<<"    kaioken    "<<z<<endl
using namespace std;

int main()
{
    ll t,n,n1,n2,m,p,q,r,s,k,x,y,a,b,arr[100100];
    string str;
    while(cin>>n>>n1>>n2){
        int f=0,g=0,found=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<ll>());
        ll s1=0,s2=0,s3=0,s4=0;
        for(int i=0; i<n1; i++){
            s1+=arr[i];
        }
        for(int i=n1; i<n1+n2; i++){
            s2+=arr[i];
        }
        for(int i=0; i<n2; i++){
            s3+=arr[i];
        }
        for(int i=n2; i<n2+n1; i++){
            s4+=arr[i];
        }
        double k1=(double)s1/n1+(double)s2/n2;
        double k2=(double)s3/n2+(double)s4/n1;
        printf("%.8lf\n",max(k1,k2));
    }
    return 0;
}
