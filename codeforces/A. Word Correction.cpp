#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int arr[202020];

int v(char ch)
{
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y');
}

int main()
{
    ll t,keep,n,m,p,q,r,s,a,b,c;
    string str,ip;
    double x,y;
    map<string,string>mp;
    /*ll res=1;
    vector<ll>vec;
    for(int i=0; res<1e15; i++){
        res*=2;
        vec.pb(res);
    }*/
    while(cin>>n>>str){
        string res="";
        for(int i=0; i<n; i++){
            if(i-1>=0 && v(str[i-1]) && v(str[i])){

            }
            else res+=str[i];
        }
        cout<<res<<endl;
    }
    return 0;
}







long long fin=ceil(sqrt(n));
            long long ano=ceil(sqrt(n));
            if(n==0) printf("1 1\n");
            else if(n==1) printf("-1\n");
            else{
                printf("%I64d 1\n",fin);
            }
