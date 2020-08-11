#include<stdio.h>

int main()
{
    int t,arr[15]={0},count=0,i,flag;
    scanf("%d",&t);
    while(t--)
    {
        flag=0;
        for(i=0; i<13; i++)
            scanf("%d",&arr[i]);
        for(i=0; i<13; i++)
        {
            if(arr[i]==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            printf("Set #%d: No\n",++count);
        else
            printf("Set #%d: Yes\n",++count);
    }
    return 0;
}
