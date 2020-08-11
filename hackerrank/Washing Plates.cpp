#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,a;
    string str;
    vector<int>vec;
    while(cin>>n>>k){
        cin>>str;
        for(int i=0; i<k; i++){
            cin>>a;
            vec.push_back(a);
        }
        int f=0;
        for(int i=0; i<vec.size(); i++){//cout<<str[vec[i]-1]<<endl;
            if(str[vec[i]-1]=='0'){
                f=1;
            }
        }
        if(f==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        vec.clear();
    }
    return 0;
}
