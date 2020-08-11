#include<stdio.h>

int main()
{
    char arr[100][100],crr[16][100]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    int i,n,j=0,k=0,l,count=0;
    scanf("%d",&n);
    if(n>=1 && n<=100)
    {
        if(n%16)
            l=(n/16+1)*16;
        else
            l=n;
        for(i=0; i<n; i++)
            scanf("%s",&arr[i]);
        for(k=0;;)
        {
            printf("%s: %s\n",arr[j++],crr[k++]);
            ++count;
            if(count==l)
                break;
            if(j==n)
                j=0;
            if(k==16)
                k=0;
        }
    }
    else
        return 0;
    return 0;
}
