#include<stdio.h>
#include<math.h>

int palin(int n)
{
    int rev=0,i=n;
    while(n!=0){
        rev=rev*10;
        rev=rev+n%10;
        n=n/10;
    }
    if(i==rev)
        return 0;
    else
        return 1;
}

int fac(int n)
{
    int i,p;
    for(i=100; i<=999; i++){
        if(n%i==0){
            p=n/i;
            if((floor(log10(p))+1)==3)
                return 0;
        }
    }
    return 1;
}

int main()
{
    int i,j,t,n,c=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=n; i>=101101; i--){
            if(palin(i)==0 && fac(i)==0)
                break;
        }
        printf("%d\n",i);
    }
    return 0;
}
