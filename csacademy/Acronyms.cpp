#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[100100];

int main()
{
    ll t,k,n,m,p,q,r,s,a,b,c;
    string str[100100];
    double x,y;
    while(cin>>n){
        unordered_map<char,int>mp;
        ll cnt=0,chidori=0,total=0;
        for(int i=0; i<n; i++){
            cin>>str[i];
            ++mp[str[i][0]];
        }
        //cout<<"hello :: "<<mp['d']<<endl;
        //sort(str,str+n);
        for(int i=0; i<n; i++){

            //cout<<mp['a']<<"  "<<mp['b']<<"  "<<mp['c']<<"  "<<mp['d']<<endl;

            int flag=0,del=0,j;

            --mp[str[i][0]];
            for(j=0; j<str[i].length(); j++){
                if(mp[str[i][j]]==0){
                    flag=1;
                    break;
                }
                else --mp[str[i][j]];
            }
            //if(flag==1) j;
            for(int k=0; k<j; k++){
                ++mp[str[i][k]];
            }
            if(flag==0){
                ++cnt;
                //cout<<str[i]<<endl;
            }
            ++mp[str[i][0]];
        }
        cout<<cnt<<endl;
    }
    return 0;
}

