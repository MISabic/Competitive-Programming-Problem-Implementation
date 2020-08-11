#include<bits/stdc++.h>
using namespace std;

int arr[10000010];

int main()
{
    double sum=0;
    for(int i=1; i<=10000005; i++){
        sum+=log10(i);
        arr[i]=(int)(sum)+1;
    }
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<arr[n]<<endl;
    }
    return 0;
}
