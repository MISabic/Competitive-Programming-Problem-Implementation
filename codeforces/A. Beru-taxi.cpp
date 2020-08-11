#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int x1,y1,n,x,y,s;
    while(scanf("%d %d",&x1,&y1)==2){
        double k=99999999;
        scanf("%d",&n);
        for(int i=0; i<n; i++){
            scanf("%d %d %d",&x,&y,&s);
            double res=sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y))/s;
            if(res<k) k=res;
        }
        printf("%.20f\n",k);
    }
    return 0;
}
