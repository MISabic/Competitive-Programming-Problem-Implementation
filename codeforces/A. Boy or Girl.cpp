#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[1000000],ch[27];
    while(scanf("%s",arr)==1){
        memset(ch,0,sizeof(ch));
        int len=strlen(arr);
        for(int i=0; i<len; i++){
            ch[arr[i]-'a']=1;
        }
        int c=0;
        for(int i=0; i<26; i++){
            if(ch[i]==1) ++c;
        }
        if(c%2==0) cout<<"CHAT WITH HER!"<<endl;
        else cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
