#include<stdio.h>

int main()
{
    int n,a,b,i,c;
    while(scanf("%d",&n)==1){
        c=0;
        for(i=0; i<n; i++){
            scanf("%d %d",&a,&b);
            if(b-a>=2) ++c;
        }
        printf("%d\n",c);
    }
    return 0;
}
