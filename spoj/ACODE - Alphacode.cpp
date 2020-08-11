#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(cin>>str && str[0]!='0'){
        long long dp[str.length()+10];

        dp[str.length()]=1;
		if(str[str.length()-1]!='0')
            dp[str.length()-1]=1;
        else dp[str.length()-1]=0;

        for(int i=str.length()-2; i>=0; i--){
            if(str[i]=='0') dp[i]=0;
            else if(str[i]>'2') dp[i]=dp[i+1];
            else if(str[i]=='2'){
                if(str[i+1]<='6') dp[i]=dp[i+1]+dp[i+2];
                else dp[i]=dp[i+1];
            }
            else dp[i]=dp[i+1]+dp[i+2];
        }
        cout<<dp[0]<<endl;
    }
    return 0;
}
