#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str;
    while(cin>>n>>str){
        vector<int>vec;
        int c=0;
        for(int i=0; i<n; i++){
            if(str[i]=='B'){
                ++c;
            }
            else{
                if(c!=0) vec.push_back(c);
                c=0;
            }
        }
        if(c!=0) vec.push_back(c);
        cout<<vec.size()<<endl;
        for(int i=0; i<vec.size(); i++)
            cout<<vec[i]<<" ";
        cout<<endl;
    }
    return 0;
}
