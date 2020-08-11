#include<cstdio>
using namespace std;

long long n,m,k,p,u,v,arr[1000100];

int main()
{
    scanf("%I64d %I64d %I64d",&n,&m,&k);
    for(int i=0; i<m; i++){
        scanf("%I64d",&p);
        arr[p]=1;
    }
    long long pos=1;
    for(int i=0; i<k; i++){
        scanf("%I64d %I64d",&u,&v);
        if(arr[pos]==1) continue;
        else{
            if(u==pos) pos=v;
            else if(v==pos) pos=u;
        }
    }
    printf("%I64d\n",pos);
    return 0;
}


