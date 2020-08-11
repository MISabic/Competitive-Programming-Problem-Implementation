/*#include<stdio.h>
#include<string.h>

char *strrev(char *s)
{
    char *real,*forward,temp;
    real=s;
    forward=s;
    while(*s)
        s++;
    while(forward<s)
    {
        temp = *(--s);
        *s = *forward;
        *forward++ = temp;
    }
    return real;
}

int alindrome(char crr[])
{
    long int i,n,p,q;
    char brr[550000];
    n=strlen(crr);
    for(i=1; i<n; i++)
    {
        strcpy(brr,crr);
        p=palindrome(&brr[i]);
        brr[i]='\0';
        q=palindrome(brr);
        if(crr[0]==crr[i-1] && crr[i]==crr[n-1])
            if(p==0 && q==0)
                return 0;
    }
}

int palindrome(char crr[])
{
    char arr[550000];
    strcpy(arr,crr);
    strrev(crr);
    if(strcmp(arr,crr)==0)
        return 0;
}

int main()
{
    char crr[550000];
    long int t;
    scanf("%ld",&t);
    while(t!=0)
    {
        scanf("%s",crr);
        if(alindrome(crr)==0)
            printf("alindrome\n");

        else if(palindrome(crr)==0)
            printf("palindrome\n");

        else
            printf("simple\n");
        --t;
    }
    return 0;
}
*/


#include<stdio.h>
#include<string.h>

char arr[550000];

int alindrome(int n)
{
    long int i,p,q;
    for(i=0; i<n-1; i++)
    {
        p=palindrome(0,i+1);
        q=palindrome(i+1,n);
        //printf("%c %c %c %c\n",arr[0],arr[i],arr[i+1],arr[n-1]);
        if (arr[0]==arr[i] && arr[i+1] == arr[n-1])//most important line but doesn't seem so important
            if(p==1 && q==1)
                return 0;
    }
}

int palindrome(int a, int b)
{
    if(a>b) return 0;
    while (a<b) {
        if (arr[a]!=arr[b-1])
            return 0;
        a++, b--;
    }
    return 1;
}

int main()
{
    long int n,t;
    scanf("%ld",&t);
    while(t!=0)
    {
        scanf("%s",arr);
        n=strlen(arr);
        if(alindrome(n)==0)
            printf("alindrome\n");

        else if(palindrome(0,n)==1)
            printf("palindrome\n");

        else
            printf("simple\n");
        --t;
    }
    return 0;
}
