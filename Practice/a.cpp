#include<stdio.h>
#include<conio.h>

int main()
{
	int a,i,result=1;
	printf("Type a number");
	scanf("%d",&a);

	for (i=2;i<=a;++i)
	{
		result*=i;
	}
	printf("Factorial of %d is %d",a,result);
}
