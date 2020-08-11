#include<bits/stdc++.h>
using namespace std;

int c=0;

bool palindrome(string str)
{
    int i=0,j=str.length()-1;
    while((c==0 || str[i]==str[j]) && i<=j){
        if(str[i]!=str[j]) ++c;
        ++i,--j;
    }
    if(i>=j) return true;
    else return false;
}

int main()
{
    int n,k;
    string str;
    while(cin>>str){
        c=0;
        k=palindrome(str);
        if(c==0 && str.length()%2!=0) cout<<"YES"<<endl;
        else if(c==1 && k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
