#include<stdio.h>

char arr[555][555],brr[555][555],crr[555][555];

int rotatedSquareCount(char drr[][555], int n1, int n2)
{
    int i,j,k,l,m=-1,n=-1,count=0,flag=0;
    for(i=0; i<n1; i++)
    {
        for(j=0; j<n1; j++)
        {
            if(i+n2>n1 || j+n2>n1)
                continue;
            if(arr[i][j]==drr[0][0])
            {
                for(k=i; k<(i+n2); k++)
                {
                    ++m;
                    n=-1;
                    for(l=j; l<(j+n2); l++)
                    {
                        if(arr[k][l]!=drr[m][++n])
                        {
                            flag=1;
                            break;
                        }
                        else
                        {
                            if(m==n2-1 && n==n2-1)
                                ++count;
                        }
                    }
                    if(arr[k][l]!=drr[m][n] && flag==1)
                    {
                        flag=0;
                        break;
                    }
                }
            }
            m=-1;
            n=-1;
        }
    }
    return count;
}

int main()
{
    int n1,n2,i,j,k,l,m=-1,n=-1,count=0,found=0;
    while(scanf("%d %d",&n1,&n2)==2)
    {
        if(n1==0 && n2==0)
            break;
        for(i=0; i<n1; i++)
        {
            for(j=0; j<n1; j++)
            {
                scanf(" %1c",&arr[i][j]);
            }
        }
        for(i=0; i<n2; i++)
        {
            for(j=0; j<n2; j++)
            {
                scanf(" %1c",&brr[i][j]);
            }
        }
        printf("%d ",rotatedSquareCount(brr, n1, n2));
        for(i=0; i<n2; i++)
        {
            for(j=0; j<n2; j++)
            {
                crr[i][j]=brr[n2-j-1][i];
            }
        }
        printf("%d ",rotatedSquareCount(crr, n1, n2));
        for(i=0; i<n2; i++)
        {
            for(j=0; j<n2; j++)
            {
                brr[i][j]=crr[n2-j-1][i];
            }
        }
        printf("%d ",rotatedSquareCount(brr, n1, n2));
        for(i=0; i<n2; i++)
        {
            for(j=0; j<n2; j++)
            {
                crr[i][j]=brr[n2-j-1][i];
            }
        }
        printf("%d\n",rotatedSquareCount(crr, n1, n2));
    }
    return 0;
}
