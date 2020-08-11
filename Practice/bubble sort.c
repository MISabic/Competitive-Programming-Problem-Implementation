#include<stdio.h>
int main()
{
    int i, j, n, arr[5]={40,10,50,20,30};
    //scanf("%d",&n);
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
        if(arr[j]>arr[j+1])
            {
                n=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=n;
            }
        }
    }
    for(i=0; i<5; i++)
        printf("%d\n",arr[i]);
}
