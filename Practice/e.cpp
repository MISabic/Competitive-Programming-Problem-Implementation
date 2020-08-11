#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j,k;
	printf("Type a number");
	scanf("%d",&n);
	for(i=n; i>0; i--)
	{
	    for(j=0;j<n-i;j++)
        {
		   printf("  ");
		} 
		for(j=1; j<=i; j++)
		{
			printf("* ");
		}
		for(k=1;k<=i-1;k++)
		{
			printf("* ");
		}
			printf("\n");
	}
}
