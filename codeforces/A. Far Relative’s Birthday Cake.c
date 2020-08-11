#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

int main()
{
    int n,i,j,arr[100][100],flag,count;
    while(scanf("%d",&n)==1)
    {
        flag=count=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf(" %c",&arr[i][j]);
            }
        }
        /*for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(arr[i][j]=='C')
                {
                    ++flag;
                    if(flag==2)
                    {
                        ++count;
                        flag=0;
                    }
                }
            }
        }*/
        flag=j=0;
        for(i=0; i<n; i++)
        {
            if(arr[j++][i]=='C')
            {
                for(j=0; j<n; j++)
                {
                    if(arr[j][i]=='C')
                    {
                        ++flag;
                        if(flag==2)
                        {
                            ++count;
                            flag=1;
                        }
                    }
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

