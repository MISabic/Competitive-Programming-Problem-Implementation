#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
#define read freopen("A-large.in","r",stdin)
#define write freopen("out.out","w",stdout)
using namespace std;

int arr[600010],check[600010];

int main()
{
    //read;
    //write;
    int n,l,r,c=0,k;
    char ch;
    while(cin>>l){
        vector<int>arr,brr;
        for(int i=0; i<l; i++){
            scanf("%d%c",&k,&ch);
            if(ch=='B') arr.push_back(k);
            else brr.push_back(k);
        }
        if(arr.size()==0 || brr.size()==0){
            cout<<0<<endl;
            continue;
        }
        sort(arr.begin(),arr.end(),greater<int>());
        sort(brr.begin(),brr.end(),greater<int>());
        int sum=0,i=0;
        while(i<arr.size() && i<brr.size()){
            sum+=arr[i]+brr[i]-2;
            i++;
        }
        cout<<sum<<endl;
        arr.clear(),brr.clear();
    }
    return 0;
}


