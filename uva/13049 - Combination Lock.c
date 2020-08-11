#include<stdio.h>
#include<math.h>
#define min(a,b) (a<b)?a:b;

int main()
{
    int t,w,n1,n2,k1,k2,i,count,c=0;
    char arr[150],brr[150];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %s %s",&w,arr,brr);
        count=0;
        for(i=0; i<w; i++)
        {
            n1=arr[i]-'0';
            n2=brr[i]-'0';
            if(n1>n2)
            {
                k1=abs(n1-n2);
                k2=abs((n2+10)-n1);
                count+=min(k1,k2);
            }
            else if(n1<n2)
            {
                k1=abs((n1+10)-n2);
                k2=abs(n1-n2);
                count+=min(k1,k2);
            }
            else
                ;
        }
        printf("Case %d: %d\n",++c,count);
    }
    return 0;
}
