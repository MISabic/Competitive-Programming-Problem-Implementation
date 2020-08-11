/*#include<stdio.h>
#include<time.h>

int main()
{
	int a,b;
	time_t start, end;
	time(&start);
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	time(&end);
	printf("%d\n%d\n",a,b);
	printf("%s", difftime(end, start));
}*/


#include<stdio.h>
#include<string.h>
int main()
{
	char ch[50];
	gets(ch);
	puts(ch[3]);
}
