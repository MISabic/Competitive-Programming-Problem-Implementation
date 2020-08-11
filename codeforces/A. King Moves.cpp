#include<bits/stdc++.h>
#define read freopen("in.txt","r",stdin);
#define ll long long
using namespace std;

int main()
{
    //read;
    map<char,char>mp;
    for(int i=1; i<=8; i++)
        mp[(char)96+i]=i+'0';
    char arr[5];
    while(scanf("%s",arr)==1){
        arr[0]=mp[arr[0]];
        if((arr[0]=='1' && arr[1]=='1') || (arr[0]=='8' && arr[1]=='8') || (arr[0]=='1' && arr[1]=='8') || (arr[0]=='8' && arr[1]=='1')){
            cout<<3<<endl;
        }
        else if(arr[0]=='1' || arr[1]=='1' || arr[0]=='8' || arr[1]=='8')
            cout<<5<<endl;
        else
            cout<<8<<endl;
    }
    return 0;
}
