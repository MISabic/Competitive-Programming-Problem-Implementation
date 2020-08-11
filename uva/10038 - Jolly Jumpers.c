#include<stdio.h>
#include<math.h>

int main()
{
    long int i,n,j,k=0,p,arr[3000],crr[1000],count=0,found=0,temp,m=0;
    while(scanf("%ld",&n)==1)
    {
        for(i=0; i<n; i++)
            scanf("%ld",&arr[i]);
        for(i=0; i<n-1; i++)
        {
            p=abs(arr[i]-arr[i+1]);
            crr[m++]=p;
            if(crr[m-1]>0 && crr[m-1]<n)
            {
                for(j=0; j<m-1; j++)
                {
                    if(crr[j]==p)
                        ++count;
                }
            }
            else
                ++found;
        }
        if(count>0 || found>0)
            printf("Not jolly\n");
        else
            printf("Jolly\n");
        count=found=m=0;
    }
    return 0;
}
