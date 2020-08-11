#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t,n,k,p,q,a,b,c;
    char str[10000];
    while(cin>>&str[1]){//cout<<strlen(&arr[1])<<endl;
        int con=0,pos=0,mn=0,dis,i=0,len=strlen(&str[1]);
        for(i=1; i<=len; i++){//cout<<str[i]<<endl;
            if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='Y'){
                dis=(i-pos);
                pos=i;
                if(dis>mn)
                    mn=dis;
                //cout<<dis<<"    "<<pos<<endl;
            }

        }
        dis=(len+1-pos);
        if(dis>mn)
            mn=dis;
        cout<<mn<<endl;
    }
    return 0;
}
