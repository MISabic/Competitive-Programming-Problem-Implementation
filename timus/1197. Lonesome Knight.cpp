#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    map<char,int>arr;
    int chess[12][12];
    memset(chess,0,sizeof(chess));
    for(int i=2; i<=9; i++)
        arr.insert(make_pair(i+95,i));
    cin>>n;
    char ch[3];
    while(n--){
        for(int i=2; i<=9; i++)
            for(int j=2; j<=9; j++)
                chess[i][j]=1;
        scanf("%s",ch);
        k=(ch[1]-'0')+1;
        int sum=0;
        if(chess[k-1][arr[ch[0]]-2]!=0) ++sum;
        if(chess[k-1][arr[ch[0]]+2]!=0) ++sum;
        if(chess[k+1][arr[ch[0]]-2]!=0) ++sum;
        if(chess[k+1][arr[ch[0]]+2]!=0) ++sum;
        if(chess[k-2][arr[ch[0]]-1]!=0) ++sum;
        if(chess[k+2][arr[ch[0]]-1]!=0) ++sum;
        if(chess[k-2][arr[ch[0]]+1]!=0) ++sum;
        if(chess[k+2][arr[ch[0]]+1]!=0) ++sum;
        cout<<sum<<endl;
    }
    return 0;
}
