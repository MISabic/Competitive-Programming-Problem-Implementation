#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    string str[150],pass;
    while(cin>>n>>k){
        for(int i=0; i<n; i++)
            cin>>str[i];
        cin>>pass;
        int len=pass.length(),c=0,bug=0,res=0;
        for(int i=0; i<n; i++){
            if(str[i].length()<len){
                ++c;
                bug++;
            }
            if(bug==k){
                res+=5;
                bug=0;
            }
        }
        cout<<(c+1)+res<<" ";
        int bonus=c/k,newc=0;     //cout<<"   "<<newc<<endl;
        for(int i=0; i<n; i++){
            if(str[i].length()==len){
                newc++;
                bug++;
            }
            if(bug==k){
                res+=5;
                bug=0;
            }
        }
        if(bug==0)
            cout<<c+newc+res-5<<endl;
        else
            cout<<c+newc+res<<endl;
    }
    return 0;
}
