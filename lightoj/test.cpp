/*#include<bits/stdc++.h>
using namespace std;

int taken[100];
string str="abc";

void permutation(string per,int n)
{
    if(per.length()==str.length()) cout<<per<<endl;

    for(int i=0; i<str.length(); i++){
        if(!taken[i]){
            taken[i]=1;
            permutation(per+str[i],n+1);
            taken[i]=0;
            per=per.substr(0,str.length()-1);
        }
    }
}

int main()
{
    permutation("",0);
}*/


//Convert the following C++ code to ASM code
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nums[]={4,4,3,1};
    int dp[3];
    dp[0] = 0;
    dp[1] = dp[2] = (int)-1e7;
    for(auto x : nums) {
        cout<<x<<endl;
        int dpNext[3];
        dpNext[0] = max(dp[x%3] + x, dp[0]);
        dpNext[1] = max(dp[(x+1)%3] + x, dp[1]);
        dpNext[2] = max(dp[(x+2)%3] + x, dp[2]);
        dp[0] = dpNext[0];
        dp[1] = dpNext[1];
        dp[2] = dpNext[2];
        cout<<dp[0]<<" "<<dp[1]<<" "<<dp[2]<<endl;
    }
    cout<<dp[0]<<endl;;
}
*/

#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
int32_t main()
{
	// freopen("1.in","r",stdin);
	// freopen("1.out","w",stdout);
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int odd=0,even=0;
		for(int i=0;i<n;i++)
		{
			int check=__builtin_popcount(a[i]);
			if( check%2==0)
				even++;
			else
				odd++;
		}
		while(q--)
		{
			int input;
			cin>>input;
			int odd1=odd,even1=even;
			int nodd=0,neven=0;
			int check1=__builtin_popcount(input);
			if(check1%2!=0)
			{

				odd1=even;
				even1=odd;

			}
			cout<<even1<<" "<<odd1<<endl;
		}

	}
	return 0;
}
