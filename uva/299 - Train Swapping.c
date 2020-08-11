#include<stdio.h>

int main()
{
    int arr[50],temp,i,j,L,n,s=0;
    scanf("%d",&n);
    while(n!=0)
    {
        scanf("%d",&L);
        if(L>=0 && L<=50)
        {
            for(i=0;i<L;i++)
            scanf("%d",&arr[i]);
            for(i=0; i<L; i++)
                for(j=i+1;j<L;j++)
                {
                    if(arr[i]>arr[j])
                    {
                        temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                        ++s;
                    }
                }
            --n;
        }
        else
            return 0;
        printf("Optimal train swapping takes %d swaps.\n",s);
        s=0;
    }
    return 0;
}
