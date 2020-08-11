#include<stdio.h>
#include<stdlib.h>

int intsort(const int *a, const int *b)
{
    return (*a-*b);
}

int main()
{
    int t,n,p,i,count,arr[10000];
    double c;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&p);
        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);
        qsort(arr,n,sizeof(int),intsort);
        count=0;
        for(i=p; i<n-p; i++)
            count+=arr[i];
        c=(double)count/(double)(n-2*p);
        printf("%f\n",c);
    }
    return 0;
}
