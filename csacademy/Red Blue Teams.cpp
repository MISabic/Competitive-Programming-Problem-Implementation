#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r,k;
    while(scanf("%d %d %d",&n,&r,&k)==3){
        int b=n-r;
        printf("%d %d\n",abs(r-k),r+min(k,b)+min(0,b-k));
    }
    return 0;
}
