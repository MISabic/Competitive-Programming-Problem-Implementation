#include <bits/stdc++.h>
using namespace std;

int par[2000002],m[2000002],w[2000002];

int finder(int x)
{
	if(par[x]==x) return x;
    return par[x]=finder(par[x]);
}

void unioner(int a,int b)
{
    int para=finder(a);
    int parb=finder(b);
    if(para==parb) return ;
    par[parb]=para;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	int x,y;
	cin>>x>>y;
	int q1,q2,q3,a,b,i;
	for(i = 1; i <= 2000000; i++) {
		par[i] = i;
	}
	cin>>q1;
	while(q1--) {
		cin>>a>>b;
		unioner(a,b);
	}
	cin>>q2;
	while(q2--) {
		cin>>a>>b;
		unioner(a+1000000,b+1000000);
	}
	cin>>q3;
	while(q3--) {
		cin>>a>>b;
		unioner(a,b+1000000);
	}
	for(i = 1; i <= x; i++){
		int u = finder(i);
		m[u]++;
	}
	for(i = 1; i <= y; i++) {
		int u = finder(i+1000000);
		w[u]++;
	}
	long long ans = 0;
	for(i = 1; i <= x; i++) {
		if(m[i]) {
			ans += (long long)(m[i])*(y-w[i]);
		}
	}
	cout<<ans<<endl;
	return 0;
}
