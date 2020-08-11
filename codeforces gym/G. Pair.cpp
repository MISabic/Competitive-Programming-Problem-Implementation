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
    int n,l,r,c=0;
    while(cin>>l>>r){
        memset(check,0,sizeof(check));
        for(int i=0; i<r; i++){
            scanf("%d",&arr[i]);
            check[arr[i]]=i+1;
        }
        int f=0;
        for(int i=0; i<r; i++){
            for(int j=arr[i]+arr[i]; j<600010; j+=arr[i]){
                if(check[j]){
                    printf("%d %d\n",i+1,check[j]);
                    f=1;
                    break;
                }
            }
            if(f==1) break;
        }
        if(f==0) printf("0 0\n");
    }
    return 0;
}

