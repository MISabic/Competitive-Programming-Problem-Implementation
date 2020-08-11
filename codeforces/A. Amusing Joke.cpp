#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c;
    while(cin>>a>>b>>c){
        int flag=0,let1[30],let2[30];
        memset(let1,0,sizeof(let1));
        memset(let2,0,sizeof(let2));
        for(int i=0; i<a.length(); i++) ++let1[a[i]-'A'];
        for(int i=0; i<b.length(); i++) ++let1[b[i]-'A'];
        for(int i=0; i<c.length(); i++) ++let2[c[i]-'A'];
        for(int i=0; i<27; i++){
            if(let1[i]!=let2[i]){
                flag=1;
                break;
            }
        }
        if(flag==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
