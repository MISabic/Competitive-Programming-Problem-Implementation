#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int>arr;
    int n,k;
    while(scanf("%d",&n)==1){
        for(int i=0; i<n; i++){
            scanf("%d",&k);
            arr[k]++;
        }
        map<int,int>::iterator it=arr.end();
        printf("%d\n",it->second);
        arr.clear();
    }
    return 0;
}
