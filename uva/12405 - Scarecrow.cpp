#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k=0;
    char arr[200];
    scanf("%d",&t);
    while(t--){
        cin>>n;
        scanf(" %s",arr);
        int len=strlen(arr);
        for(int i=1; i<len; i++){
            if(arr[i-1]=='.'){
                arr[i]='@';
                i+=2;
            }
        }
        if(arr[len-1]=='.' && arr[len-2]!='@')
            arr[len-1]='@';
        int c=0;
        for(int i=0; i<len; i++)
            if(arr[i]=='@')
                ++c;
        printf("Case %d: %d\n",++k,c);
    }
    return 0;
}
