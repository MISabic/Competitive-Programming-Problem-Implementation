#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,c=0;
    cin>>n;
    while(n--){
        cin>>a;
        int k=((a-10)<0)?0:(a-10);
        printf("%d %d\n",k,a-k);
    }
    return 0;
}

