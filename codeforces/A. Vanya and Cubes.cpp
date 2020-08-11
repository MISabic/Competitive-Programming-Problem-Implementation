#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1){
        int i=1,c=0;
        while(n-(i*(i+1)/2)>=0){
            n=n-(i*(i+1)/2);
            ++i,++c;
        }
        cout<<c<<endl;
    }
    return 0;
}

