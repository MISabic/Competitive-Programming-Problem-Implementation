#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int n,x1,y1,x2,y2,m,cx,cy;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        scanf("%d %d %d %d %d",&x1,&y1,&x2,&y2,&m);
        printf("Case %d:\n",i);
        for(int j=0; j<m; j++){
            scanf("%d %d",&cx,&cy);
            if(cx>=x1 && cx<=x2 && cy>=y1 && cy<=y2)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
