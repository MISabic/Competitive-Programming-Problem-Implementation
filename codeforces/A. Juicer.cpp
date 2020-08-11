#include<bits/stdc++.h>
#define read freopen("in.txt","r",stdin)
#define rep(i,n) for(int i=0; i<n; i++)
#define ll long long
#define pf printf
#define sf scanf
using namespace std;

int main()
{
    //read;
    char arr[100100];
    map<char,char>mp;
    for(int i=1; i<26; i++){
        mp['a'+i]=(char)(96+i);
    }
    mp['a']='z';
    /*map<char,char>::iterator it=mp.begin();
    for(it; it!=mp.end(); it++)
        cout<<it->first<<"    "<<it->second<<endl;*/
    while(sf("%s",arr)==1){
        int len=strlen(arr),f=0;
        for(int i=0; i<len; i++){
            if(arr[i]!='a'){
                arr[i]=mp[arr[i]];
                f=1;
            }
            else if(arr[i]=='a' && f==1){
                break;
            }
            else if(arr[i]=='a' && f==0 && i==len-1){
                arr[i]=mp[arr[i]];
            }
        }
        cout<<arr<<endl;
    }
    return 0;
}

