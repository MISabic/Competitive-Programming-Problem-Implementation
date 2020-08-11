#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n=1;
    map<long long,int> arr;
    for(int i=0; i<70000; i++){
        n+=i;
        arr.insert(make_pair(n,1));
    }
    cin>>t;
    while(t--){
        cin>>n;
        cout<<arr[n]<<endl;
    }
    return 0;
}


//Another approach
/*#include<cstdio>
#include<map>
using namespace std;

int main()
{
    long long t,n,i,j,k=1,arr[65600];
    map<long long,long long>brr;
    brr[1]=1;
    for(i=1; i<65540; i++){
        brr[(i*(i+1))/2+1]=1;
    }
    scanf("%lld",&t);
    for(j=0; j<t; j++){
        scanf("%lld",&arr[j]);
    }
    printf("%lld",brr[arr[0]]);
    for(j=1; j<t; j++){
        printf(" %lld",brr[arr[j]]);
    }
    printf("\n");
    return 0;
}*/
