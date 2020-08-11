#include<bits/stdc++.h>
using namespace std;

long long num(long long i)
{
    if(i%2==0 && (i/2)%2!=0) return i;
    else if(i%2==0 && (i/2)%2==0) return i+1;
    else if((i-1)%2==0 && ((i-1)/2)%2==0) return 0LL;
    else if((i-1)%2==0 && ((i-1)/2)%2!=0) return 1LL;
}

int main()
{
    long long t,n,l,r;
    /*int k=1;
    for(int i=1; i<=120; i++){
        cout<<i-1<<" :: "<<'\t'<<k<<'\t';
        n=(k^i);
        k=n;
        if(i%10==0) cout<<endl;
    }*/
    /*for(int i=1; i<=100; i++){
        k=(k&0);
        cout<<k<<endl;
    }*/
    cin>>t;
    while(t--){
        cin>>l>>r;
        if((r-l+1)==3){
            long long f=0,val;
            for(int i=l; i<=r; i++){
                if(num(i)==0)
                    f=1;
            }
            if(f==1)
                cout<<0LL<<endl;
            else{
                long long a=num(l),b=num(l+1),c=num(l+2);
                cout<<(a&b&c)<<endl;
            }
        }
        else if((r-l+1)==2){
            long long f=0,val;
            for(int i=l; i<=r; i++){
                if(num(i)==0)
                    f=1;
            }
            if(f==1)
                cout<<0LL<<endl;
            else{
                long long a=num(l),b=num(l+1);
                cout<<(a&b)<<endl;
            }
        }
        else if(l==r){  //cout<<"hello"<<endl;
            cout<<num(l)<<endl;
        }
        else
            cout<<0<<endl;
    }
    return 0;
}
