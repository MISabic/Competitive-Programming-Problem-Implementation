#include<bits/stdc++.h>
#define mem0(a)         memset(a,0,sizeof(a))
#define mem1(a)         memset(a,-1,sizeof(a))
#define memc(a,c)       memset(a,'c',sizeof(a))
#define ll              long long
#define llu             long long unsigned int
#define pb              push_back
#define mkp             make_pair
#define P               pair<int,int>
#define fi              first
#define si              second
#define len(x) x.length()
using namespace std;

bool isValid(string a,string b)
{
    if(len(a)==len(b)){
        int c=0;
        for(int i=0; i<len(a); i++){
            if(a[i]!=b[i])
                ++c;
        }
        if(c>1) return false;
        else return true;
    }
    else return false;
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,visited[500],res[500],flag=0;
    string str[500],arr,brr;
    cin>>n;
    while(n--){
        if(flag==0) flag=1;
        else cout<<endl;
        int i=0;
        map<string,int>mp;
        while(cin>>arr && arr!="*"){
            str[i++]=arr;
            mp[arr]=i-1;
        }
        getc(stdin);
        while(1){
            getline(cin,arr);
            mem0(visited);
            mem0(res);
            if(arr=="") break;
            for(int j=0; j<arr.length(); j++){
                if(isspace(arr[j])){
                    brr=arr.substr(j+1,arr.length());
                    arr=arr.substr(0,j);
                }
            }
            if(arr==brr){
                cout<<arr<<" "<<brr<<" "<<0<<endl;
                continue;
            }
            queue<string>q;
            q.push(arr);
            visited[mp[arr]]=1;
            while(!q.empty()){
                string test=q.front();  //cout<< test <<endl;
                q.pop();
                for(int j=0; j<i; j++){
                    if(isValid(test,str[j]) && visited[mp[str[j]]]==0){
                        visited[mp[str[j]]]=1;
                        res[mp[str[j]]]+=(res[mp[test]]+1);
                        q.push(str[j]);
                    }
                }
            }
            cout<<arr<<" "<<brr<<" "<<res[mp[brr]]<<endl;
        }
    }
    return 0;
}
