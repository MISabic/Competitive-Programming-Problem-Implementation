#include<stdio.h>

int strtonum(char crr[20])
{
    int i=8,j=0,n;
    char arr[20];
    while(crr[i]!='\0')
    {
        arr[j++]=crr[i];
        i++;
    }
    arr[j]='\0';
    n=atoi(arr);
    return n;
}
int main()
{
    long int n,t,i,j=0,k,l,r,arr[100],total=0,num;
    char ch,crr[100];
    scanf("%ld",&t);
    for(k=0; k<t; k++)
    {
    scanf("%ld\n",&n);
    for(i=0; i<n; i++)
    {
        gets(crr);
        if(strcmp(crr,"LEFT")==0)
        {
            arr[i]=-1;
        }
        else if(strcmp(crr,"RIGHT")==0)
        {
            arr[i]=1;
        }
        else
        {
            num=strtonum(crr);
            arr[i]=arr[num-1];
        }
    }
    for(j=0; j<n; j++)
    {
        total+=arr[j];
    }
    printf("%ld\n",total);
    total=0;
    }
    return 0;
}
