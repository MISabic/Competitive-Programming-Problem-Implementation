#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[30];
    string str;
    while(cin>>n>>str){
        if(n>26){
            cout<<-1<<endl;
            continue;
        }
        memset(arr,0,sizeof(arr));
        for(int i=0; i<n; i++){
            arr[(int)str[i]-97]++;
        }
        int sum=0;
        for(int i=0; i<26; i++){
            if(arr[i]>1)
                sum+=(arr[i]-1);
        }
        cout<<sum<<endl;
    }
    return 0;
}
