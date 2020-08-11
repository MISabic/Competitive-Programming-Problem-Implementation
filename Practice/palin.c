#include<stdio.h>
int main()
{
int n,i,rem,rev=0;
scanf("%d",&i);
n=i;
while(n!=0)
{
    rem=n%10;
    rev=rem+rev*10;
    n=n/10;
}
if(i==rev)
printf("palindrome");
else
printf("not palindrome");
}


