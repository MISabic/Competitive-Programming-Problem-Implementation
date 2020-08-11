#include<bits/stdc++.h>
using namespace std;

vector<int>vec;
int prime[100];
bool check[100];

void backtrack(int num,int n)
{
    if(vec.size()==n && prime[vec.back()+vec[0]]==1){
        cout<<vec[0];
        for(int i=1; i<vec.size(); i++)
            cout<<" "<<vec[i];
        cout<<endl;
        return ;
    }
    for(int i=2; i<=n; i++){
        if(check[i]!=true && prime[vec.back()+i]==1){
            vec.push_back(i);
            check[i]=true;
            backtrack(i,n);
            check[i]=false;
            vec.pop_back();
        }
    }
}

int main()
{
    memset(prime,0,sizeof(prime));
    prime[2]=1,prime[3]=1,prime[5]=1,prime[7]=1,prime[11]=1,prime[13]=1,prime[17]=1,prime[19]=1;
    prime[23]=1,prime[29]=1,prime[31]=1,prime[37]=1;
    int n,c=0;
    while(cin>>n){
        vec.clear();
        vec.push_back(1);
        memset(check,false,sizeof(check));
        check[1]=true;
        if(c>0) cout<<endl;
        printf("Case %d:\n",++c);
        backtrack(1,n);
    }
    return 0;
}
