#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,len,flag=0;
    scanf("%d",&n);
    while(n--){
        stack<char> sto;
        if(flag==0){
            getc(stdin);
            flag=1;
        }
        string arr;
        getline(cin,arr);
        len=arr.size();
        for(i=0; i<len; i++){
            if(arr[i]=='(' || arr[i]=='[')
                sto.push(arr[i]);
            else if(!sto.empty() && ((sto.top()=='(' && arr[i]==')') || (sto.top()=='[' && arr[i]==']')))
                sto.pop();
            else break;
        }
        if(sto.empty() && i==len || len==0) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
