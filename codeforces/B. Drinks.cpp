#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    while(cin>>n){
        int total=0;
        for(int i=0; i<n; i++){
            cin>>x;
            total+=x;
        }
        printf("%.12f\n",total/(double)n);
    }
    return 0;
}
