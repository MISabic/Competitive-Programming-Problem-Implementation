#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string ins;
    cin>>n;
    for(int i=1; i<=n; i++){
        stack<string>backwardStack,forwardStack;
        string currentPage="http://www.lightoj.com/";
        cout<<"Case "<<i<<":"<<endl;
        while(cin>>ins && ins!="QUIT"){
            if(ins=="VISIT"){
                backwardStack.push(currentPage);
                cin>>currentPage;
                forwardStack=stack<string>();
                cout<<currentPage<<endl;
            }
            else if(ins=="BACK" && !backwardStack.empty()){
                forwardStack.push(currentPage);
                currentPage=backwardStack.top();
                backwardStack.pop();
                cout<<currentPage<<endl;
            }
            else if(ins=="FORWARD" && !forwardStack.empty()){
                backwardStack.push(currentPage);
                currentPage=forwardStack.top();
                forwardStack.pop();
                cout<<currentPage<<endl;
            }
            else{
                cout<<"Ignored"<<endl;
            }
        }
    }
    return 0;
}
