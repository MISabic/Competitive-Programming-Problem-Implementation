#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    //ll t,k,n,m,p,q,r,s,a,b,c,arr[100100];
    string str,ip;
    double x,y;
    map<string,string>mp;
    ll res=1;
    /*vector<ll>vec;
    for(int i=0; res<1e15; i++){
        res*=2;
        vec.pb(res);
    }*/
    vector<int>vec;
    for(int i=0; i<=9; i++){
        for(int j=0; j<=9; j++){
            for(int k=0; k<=9; k++){
                for(int l=0; l<=9; l++){
                    for(int m=0; m<=9; m++){
                        for(int n=0; n<=9; n++){
                            for(int o=0; o<=9; o++){
                                for(int p=0; p<=9; p++){
                                    if((i+j+k+l+m+n+o+p)==10){
                                        //cout<< i+j+k+l+m+n+o+p <<endl;
                                        //++cnt;
                                        vec.push_back(i*10000000+j*1000000+k*100000+l*10000+m*1000+n*100+o*10+p*1);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    int n;
    while(cin>>n){
        ll cnt=0;
        cout<<vec[n-1]<<endl;
    }
    return 0;
}
