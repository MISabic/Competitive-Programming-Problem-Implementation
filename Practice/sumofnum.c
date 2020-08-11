
#include<stdio.h>
#include<ctype.h>

int main()
{
    int sum=0,i;
    char ch[1000];

    for(i=0;;i++)
    {
        ch[i]=getchar();
        if(ch[i]=='\n')
            break;
        else if(isdigit(ch[i]))
            sum+=ch[i]-'0';
        else if(isspace(ch[i]))
            break;
    }
    printf("The sum in s:%d",sum);
}



/*

#include<stdio.h>

int oddSum(int *p, int size);

int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("%d",oddSum(arr,n));
}

int oddSum(int *p, int size)
{
    int j,total=0;
    j=p+size;

    for(p; p<j; p++)
        if(*p%2!=0)
            total+=*p;
    return total;
}

/*
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int i,m,l,len;
    char c[100];
    char ch[100]

    gets(c);
    gets(ch);

    l=strlen(c);
    len=strlen(ch);
    m=l-len;
    if(m<0)
        m=m*-1;
    for(i=0;i<m;i++)
    {
        putchar(c[])
    }

}
*/


