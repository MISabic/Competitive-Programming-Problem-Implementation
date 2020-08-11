//B. Count Doubles

/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,num[1005];
    cin>>t;
    while(t--){
        cin>>n;
        map<int,int>arr;
        for(int i=0; i<n; i++){
            cin>>num[i];
            arr[num[i]]=1;
        }
        int k=0;
        for(int i=0; i<n; i++){
            if(arr[num[i]*2]==1)
                ++k;
        }
        cout<<k<<endl;
    }
    return 0;
}*/


//E. Shifa's Problem

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k=0,arr[30];
    for(int j=1; j<30; j++)
        arr[j]=(int)pow(2,j+1)-1;
    arr[0]=1,arr[24]=0;
    cin>>t;
    while(t--){
        cin>>n;
        printf("Case %d: %d\n",++k,arr[n%25]);
    }
    return 0;
}


//C. Deal with Flibonakki Again

/*#include<bits/stdc++.h>
#define max(a,b) (a>b)?a:b
using namespace std;

int main()
{
    long long t,n,k,arr[30]={0,2,15,104,714,867,321,374,284,608,952,15,161,106,582,948,13,151,38,116,775,275,144,734,967,1001,1006};
    cin>>t;
    while(t--){
        cin>>n;
        if(n<27){
            k=arr[0];
            for(int i=0; i<=n; i++){
                k=max(k,arr[i]);
            }
            cout<<k<<endl;
        }
        else
            cout<<1006<<endl;
    }
    return 0;
}*/
