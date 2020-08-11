#include<stdio.h>

void mat(int arr[2][2],int multi[2][2])
{
    int w,x,y,z;
    w=arr[0][0]*multi[0][0]+arr[0][1]*multi[1][0];
    x=arr[0][0]*multi[0][1]+arr[0][1]*multi[1][1];
    y=arr[1][0]*multi[0][0]+arr[1][0]*multi[1][0];
    z=arr[1][1]*multi[0][1]+arr[1][1]*multi[1][1];

    arr[0][0]=w%10000;
    arr[0][1]=x%10000;
    arr[1][0]=y%10000;
    arr[1][1]=z%10000;
}

void fib(int arr[2][2],int n,int m)
{
    int i,base,multi[2][2]={{1,1},{1,0}};
    n=n%15000;
    if(n==0)
        dig(m,arr[0][1]);
    if(n!=0)
    {
        for(i=2; i<=n; i++)
            mat(arr,multi);
        dig(m,arr[0][0]);
    }
}

int dig(int m,int p)
{
    int i,base=1;
    for(i=0;i<m;i++)
        base *= 10;
    printf("%d\n",p%base);
}

int main()
{
    int t,a,b,m,arr[2][2];
    int n;
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d %d %d %d",&a,&b,&n,&m);
        if(n==0)
        {
            dig(m,a);
            --t;
            continue;
        }
        else if(n==1)
        {
            dig(m,b);
            --t;
            continue;
        }
        arr[0][0]=a+b;
        arr[0][1]=b;
        arr[1][0]=b;
        arr[1][1]=a;
        fib(arr,n-1,m);
        --t;
    }
    return 0;
}

/*
#include <stdio.h>

int tbl[15000];

int main(){
    int a,b,n,m,tc,i,base;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d %d %d %d",&a,&b,&n,&m);
        tbl[0] = a; tbl[1] = b;
        n=n%15000;
        for(i=2;i<=n;i++)
        {
            tbl[i] = tbl[i-1] + tbl[i-2];
            tbl[i] %= 10000;
        }
        base = 1;
        for(i=0;i<m;i++)
            base *= 10;
        //printf("%d\n",tbl[n] % base);
        printf("%d\n",tbl[n]);
    }
    return 0;
}*/
