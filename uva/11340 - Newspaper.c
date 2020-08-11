#include<stdio.h>
#include<string.h>

typedef struct
{
    char ch;
    double cent;
}news;

news value[255];

int main()
{
    int n,k,m,i,j,l,flag=0,len;
    char arr[15000];
    double dollars,count=0;
    scanf("%d",&n);
    while(n--)
    {
        count=flag=0;
        scanf("%d",&k);
        for(i=0; i<k; i++)
        {
            getc(stdin);
            scanf("%c %lf",&(value[i].ch),&(value[i].cent));
            value[i].cent/=100;
        }
        scanf("%d",&m);
        for(i=0; i<m; i++)
        {
            if(flag==0)
            {
                getc(stdin);
                flag=1;
            }
            gets(arr);
            len=strlen(arr);
            for(j=0; j<len; j++)
            {
                for(l=0; l<k; l++)
                {
                    if(arr[j]==value[l].ch)
                    {
                        count=count+value[l].cent;
                        break;
                    }
                }
            }
        }
        printf("%.2f$\n",count);
    }
    return 0;
}
