#include<bits/stdc++.h>
#define pf printf("hello");
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int c1=0,c2=0,n,a,b;
    while(scanf("%d",&n)==1){
        for(int i=0; i<n; i++){
            scanf("%d %d",&a,&b);
            if(a>b) c1++;
            else if(b>a) c2++;
        }
        if(c1>c2) cout<<"Mishka"<<endl;
        else if(c2>c1) cout<<"Chris"<<endl;
        else cout<<"Friendship is magic!^^"<<endl;
        c1=c2=0;
    }
    return 0;
}
