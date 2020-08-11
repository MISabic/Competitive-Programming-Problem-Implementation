#include<bits/stdc++.h>
#define ll long long
#define read freopen("in.txt","r",stdin)
using namespace std;

int main()
{
    //read;
    int n,q,p;
    scanf("%d",&n);
    while(n--){
        string str,fin="";
        cin>>str;
        int len=str.length();
        for(int i=0; i<len; i++){
            if(tolower(str[i])==str[i])
                str[i]=toupper(str[i]);
            else if(toupper(str[i])==str[i])
                str[i]=tolower(str[i]);
        }
        cout<<str<<endl;
    }
    return 0;
}
