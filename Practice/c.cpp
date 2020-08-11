/*#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n;
	scanf("%d",&n);
	  for(i=2;i<=n-1;i++)
  {
	if(n%i==0 )
		{
			printf("%d is Not Prime",n);
			break;
		}
}
   if ( i == n )
      printf("%d is prime.\n", n);
	  	getch();

}*/


#include<stdio.h>

int main(){

    int num,i;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=2;i<=num;i++){
        if(num%i==0){
         break;
        }
    }
   if(num==i && num!= 1)
    	printf("%d is a prime number",num);
   else
      	printf("%d is not a prime number",num);
   return 0;
}
