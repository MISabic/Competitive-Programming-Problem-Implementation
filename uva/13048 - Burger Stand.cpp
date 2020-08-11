#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[60];
    int t,k=0;
    cin>>t;
    while(t--){
        memset(arr,'0',sizeof(arr));
        scanf("%s",&arr[5]);
        int len=strlen(arr);
        for(int i=5; i<len; i++){
            if(arr[i]=='B') arr[i]='#',arr[i-1]='#',arr[i-2]='#';
            if(arr[i]=='S'){
                if(arr[i+1]=='S') arr[i]='#',arr[i-1]='#';
                else arr[i]='#',arr[i-1]='#',arr[i+1]='#';
            }
            if(arr[i]=='D') arr[i]='#';
        }
        int c=0;
        for(int i=5; i<len; i++){
            if(arr[i]=='-')
                ++c;
        }
        printf("Case %d: %d\n",++k,c);
    }
    return 0;
}
