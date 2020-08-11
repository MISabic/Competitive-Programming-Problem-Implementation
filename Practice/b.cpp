#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j;
	printf("Type a number");
	scanf("%d",&n);
	for(i=n; i>0; i--)
	{
	for(j=1; j<=i; j++)
		{
			printf("*");
		}
	printf("\n");
	}
	getch();

}
