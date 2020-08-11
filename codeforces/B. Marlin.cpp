#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[202020];

int main()
{
    ll t,keep,n,m,k,p,q,r,s,a,b,c;
    string str;
    double x,y;
    map<string,int>mp;
    while(cin>>n>>k){
        char test[5][105];
        memset(test,'.',sizeof(test));

        ll o=0,sum=0,ok=0,avail=2*n - 4,res=0;
        if(k==0){
            cout<<"YES"<<endl;
            for(int i=0; i<4; i++){
                for(int j=0; j<n; j++){
                    cout<<test[i][j];
                }
                cout<<endl;
            }
            continue;
        }
        if(k>avail){
            /*while(1){

            }*/
            cout<<"NO"<<endl;
        }
        else{
            if(k%2==0){
                cout<<"YES"<<endl;
                for(int j=1; j<n; j++){
                    for(int i=1; i<3; i++){
                            test[i][j]='#';
                            --k;
                            if(k==0) break;
                    }
                    if(k==0) break;
                }
                for(int i=0; i<4; i++){
                    for(int j=0; j<n; j++){
                        cout<<test[i][j];
                    }
                    cout<<endl;
                }
            }
            else{

                    cout<<"YES"<<endl;
                    test[1][n/2]='#';
                    --k;
                    int track=0;
                    for(int j=1; j<3; j++){
                        for(int i=1; i<=min((n-2)/2,k/2); i++){
                            test[j][n/2 - i]='#';
                            test[j][n/2 + i]='#';
                            ++track;
                        }
                        k-=(track*2);
                        if(k==0) break;
                    }

                    for(int i=0; i<4; i++){
                        for(int j=0; j<n; j++){
                            cout<<test[i][j];
                        }
                        cout<<endl;
                    }
                /*}
                else{
                    cout<<"NO"<<endl;
                }*/
            }
        }
    }
    return 0;
}
