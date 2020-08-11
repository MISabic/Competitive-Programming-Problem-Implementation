/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,a,b,arr[5000],brr[5000];
    pair<int,int>pi[2000];
    while(cin>>n>>m){
        memset(arr,0,sizeof(arr));
        long long res=1;
        for(int i=0; i<m; i++){
            cin>>pi[i].first>>pi[i].second;
        }
        for(int i=0; i<m; i++){
            mp[pi[i].first]++;
            mp[pi[i].second]++;
        }
        priority_queue<int>pq;
        for(int i=0; i<mp.size(); i++){

        }
        cout<<res<<endl;
    }
    return 0;
}*/


/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,a,b,arr[100];
    while(cin>>n>>m){
        memset(arr,0,sizeof(arr));
        long long res=1;
        for(int i=0; i<m; i++){
            cin>>a>>b;
            if(arr[b]==0){
                //arr[a]=1;
                arr[b]=1;
                //res*=2;
            }
            else{
                arr[a]=1;
                res*=2;
            }
            cout<<res<<endl;
        }
        cout<<res<<endl;
    }
    return 0;
}*/


#include <iostream>

using namespace std;
int parent[55],component[55];
int getid(int a)
{
    return parent[a] ==a ? a : parent[a] = getid(parent[a]);
}
long long pw(long long x, long long sum) {
	long long res = 1, power = sum, val = x;
	while (power) {
		if (power & 1) {
			res *= val;
		}
		val *= val;
		power >>= 1ll;
	}
	return res;
}
int main()
{
    int n,m;
    long long ans = 1;
    cin>>n>>m;
    for(int i = 1 ; i<=n ; i++) parent[i] = i;
    for(int i = 0 ; i<m ; i++)
    {
        int x,y;
        cin>>x>>y;
       parent[getid(y)] =  parent[getid(x)];
    }
   for(int i = 1 ; i<=n ; i++) component[getid(i)]++;
   for(int i = 1 ; i<=n ; i++) if(component[i]) ans*= pw(2 , component[i]-1);
   cout<<ans<<endl;
    return 0;
}

