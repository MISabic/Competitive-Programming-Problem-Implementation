#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,k;
    string str;
    while(cin>>n>>k>>str){
        set<char>st;
        for(int i=0; i<n; i++){
            st.insert(str[i]);
        }
        if(k>n){
            set<char>::iterator it=st.begin();
            cout<<str;
            for(int i=n; i<k; i++) cout<<(*it);
            cout<<endl;
        }
        else{
            ll ind=k-1;
            while(1){
                int flag=0;
                char ch;
                for(auto x:st){
                    if(x>str[ind]){
                        flag=1;
                        ch=x;
                        break;
                    }
                }
                if(flag==0){
                    --ind;
                }
                else{
                        //cout<<ind<<endl;
                    for(int i=0; i<=min(ind-1,k-2); i++){
                        cout<<str[i];
                    }
                    set<char>::iterator it=st.begin();
                    cout<<ch;
                    for(ind+=1; ind<k; ind++){
                        cout<<(*it);
                    }
                    cout<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
