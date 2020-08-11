#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool vowel(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return true;
    return false;
}

int main()
{
    int n;
    string str;
    while(cin>>n>>str)
    {
        int cnt=0,flag=0;
        for(int i=0; i<n-1; i++){
            if(vowel(str[i]) && vowel(str[i+1])){
                ++cnt;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}



