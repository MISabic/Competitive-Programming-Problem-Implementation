#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char arr[100];
    int n,i,len,test,flag=0,plug=0,count=0;
    float p,q;
    scanf("%d",&n);
    while(n!=0)
    {
        if(plug==0)
        {
            getc(stdin);
            plug=1;
        }
        flag=p=q=0;
        gets(arr);
        len=strlen(arr);
        for(i=0; i<len; i++)
        {
            if(isdigit(arr[i]) && flag==0)
            {
                p=(float)(arr[i]-'0')*.5;
                flag=1;
                continue;
            }
            if(isdigit(arr[i]) && flag==1)
            {
                q=(float)(arr[i]-'0')*.05;
                break;
            }
        }
        printf("Case %d: %.4g\n",++count,p+q);
        --n;
    }
    return 0;
}
