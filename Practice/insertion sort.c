#include<stdio.h>
int main()
{
    int i, j, n, arr[6]={40,10,50,20,30,60};
    //scanf("%d",&n);
    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            if(arr[j+1]<arr[j])
            {
                n=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=n;
                printf("\n%d  %d\n",arr[j],arr[j+1]);
            }
        }
    }
    for(i=0; i<6; i++)
        printf("%d\n",arr[i]);
}

