#include<cstdio>

int main()
{
    int n,arr[105];
    arr[0]=0;
    for(int i=1; i<102; i++)
        arr[i]=i*i+arr[i-1];
    while(scanf("%d",&n)==1 && n)
        printf("%d\n",arr[n]);
    return 0;
}
