#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char *a;
	printf("Type anything: ");
	gets(a);
	strupr(a);
	puts(a);
	getch();
	return 0;
}
