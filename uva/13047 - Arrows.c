#include<stdio.h>
#include<string.h>

int main()
{
    int t,len,i,j,count,found,tc=0;
    char arr[100],ch;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",arr);
        count=found=0;
        len=strlen(arr);
        for(i=0; i<len; i++)
        {
            if(arr[i]=='<')
            {
                ch=arr[i+1];
                count=1;
                for(j=i+1; j<len; j++)
                {
                    if(arr[j]==ch && arr[j]!='<' && arr[j]!='>')
                        ++count;
                    else
                        break;
                }
            }
            else if(arr[i]=='>')
            {
                ch=arr[i-1];
                count=1;
                for(j=i-1; j>=0; j--)
                {
                    if(arr[j]==ch && arr[j]!='>' && arr[j]!='<')
                        ++count;
                    else
                        break;
                }
            }
            if(count>found)
                found=count;
        }

        if(found==0)
            printf("Case %d: -1\n",++tc);
        else
            printf("Case %d: %d\n",++tc,found);
    }
    return 0;
}
