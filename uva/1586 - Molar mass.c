#include<stdio.h>
#include<string.h>
#include<ctype.h>

char arr[100];
double c=12.01, h=1.008, o=16, n=14.01, count;
double value(int i,double c)
{
    int num;
    if(!isdigit(arr[i+1]))
        count+=c;
    else{
        num=arr[i+1]-'0';
        if(isdigit(arr[i+2])){
            num=(num*10)+(arr[i+2]-'0');
            count+=c*num;
        }
        else
            count+=c*num;
    }
    return count;
}

int main()
{
    int i,len,t;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%s",arr);
        len=strlen(arr);
        for(i=0; i<len; i++)
        {
            if(arr[i]=='C')
                value(i,c);
            else if(arr[i]=='H')
                value(i,h);
            else if(arr[i]=='O')
                value(i,o);
            else if(arr[i]=='N')
                value(i,n);
        }
        printf("%.3f\n",count);
    }
    return 0;
}
