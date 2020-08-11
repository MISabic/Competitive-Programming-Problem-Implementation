#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char n[50], s[50];
	int a,b,c;
	printf("Type anything : \n");
	gets(n);
	a=strlen(n);
	for(b=a-1, c=0; b<a, c>=a; b--,c++)
	{
		s[c]=n[b];
		s[c] = '\0';
	}
	if(strcmp(n,s)==0)
	{
		printf("palindrome");
	}

	return 0;
}
