#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k;
    string str;
    cin>>t;
    while(t--){
        cin>>n>>k>>str;
        int m=999999,pos;
        for(int i=0; i<n; i++){
            if((int)str[i]<m){
                m=(int)str[i];
                pos=i;
            }
        }
        vector<string>vec;
        if(k==1){
            if(pos==0 || pos==n-1){
                cout<<str[pos]<<endl;
            }
            else{
                for(int i=0; i<n; i++){
                    if(str[i]==str[pos])
                        vec.push_back(str.substr(i,n-1));
                }
                sort(vec.begin(),vec.end());
                cout<<vec[0]<<endl;
            }
        }
        else
            cout<<str[pos]<<endl;
    }
    return 0;
}
