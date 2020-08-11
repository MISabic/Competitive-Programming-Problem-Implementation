#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,r1,c1,r2,c2;
    scanf("%d",&c);
    for(int i=1; i<=c; i++){
        scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
        int x1=abs(r1-c1),x2=abs(r2-c2);

        if(r1==r2 && c1==c2) printf("Case %d: 0\n",i);
        else if(abs(r1-r2)==abs(c1-c2)) printf("Case %d: 1\n",i);
        else if(abs(x1-x2)%2) printf("Case %d: impossible\n",i);
        else printf("Case %d: 2\n",i);
    }
    return 0;
}
