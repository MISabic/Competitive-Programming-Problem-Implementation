#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
        double res=0;
        for(int i=1; i<=n; i++){
            res+=(1/double(i));
        }
        printf("%.6lf\n",res);
    }
    return 0;
}
