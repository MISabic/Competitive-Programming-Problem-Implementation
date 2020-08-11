#include<stdio.h>
#include<string.h>
#define MAX 10000

int validate(char []);
char * division(char[],long);
long int remainder;

int main(){

    char dividend[MAX],*quotient;
    long int divisor;

    printf("Enter dividend: ");
    scanf("%s",dividend);
    if(validate(dividend))
         return 0;

    printf("Enter divisor: ");
    scanf("%ld",&divisor);

    quotient = division(dividend,divisor);

    while(*quotient)
         if(*quotient ==48)
             quotient++;
         else
             break;

    printf("Quotient: %s / %ld  =  %s",dividend,divisor,quotient);
    printf ("\nRemainder: %ld",remainder);
    return 0;
}

int validate(char num[]){
    int i=0;

    while(num[i]){
         if(!isdigit(num[i])){
             printf("Invalid positive integer: %s",num);
             return 1;
         }
         i++;
    }

    return 0;
}

char * division(char dividend[],long divisor){

    static char quotient[MAX];
    long temp=0;
    int i=0,j=0;

    while(dividend[i]){

         temp = temp*10 + (dividend[i]-'0');
         //printf("\n%d\n",temp);
         if(temp<divisor){

             quotient[j++] = 48;
             printf("\n%c\n",48);

         }
         else{

             quotient[j++] = (temp / divisor)+'0';
             temp = temp % divisor;
             printf("\n\t\t%d\n",temp);

         }
         printf("%s\n",quotient);
         i++;
    }

    quotient[j] = '\0';
    remainder = temp;
    return quotient;
}
/**1. C code for division of very big numbers.
*  2. How to get division of two very large numbers larger or beyond than long int in c programming language.
*/
/*
#include<stdio.h>
#include<string.h>
#define MAX 10000

int validate(char []);
char * division(char[],long);
long int remainder;

int main(){

    char dividend[MAX],*quotient;
    long int divisor;

    printf("Enter dividend: ");
    scanf("%s",dividend);
    if(validate(dividend))
         return 0;

    printf("Enter divisor: ");
    scanf("%ld",&divisor);

    quotient = division(dividend,divisor);

    while(*quotient)
         if(*quotient ==48)
             quotient++;
         else
             break;

    printf("Quotient: %s / %ld  =  %s",dividend,divisor,quotient);
    printf ("\nRemainder: %ld",remainder);
    return 0;
}

int validate(char num[]){
    int i=0;

    while(num[i]){
         if(num[i] < 48 || num[i]> 57){
             printf("Invalid positive integer: %s",num);
             return 1;
         }
         i++;
    }

    return 0;
}

char * division(char dividend[],long divisor){

    static char quotient[MAX];
    long temp=0;
    int i=0,j=0;

    while(dividend[i]){

         temp = temp*10 + (dividend[i] -48);
         if(temp<divisor){

             quotient[j++] = 48;

         }
         else{
             quotient[j++] = (temp / divisor) + 48;;
             temp = temp % divisor;

         }
         i++;
    }

    quotient[j] = '\0';
    remainder = temp;
    return quotient;
}*/
/**
*Sample output:
*Enter dividend: 543109237823560187
*Enter divisor: 456
*Quotient: 543109237823560187 / 456 = 1191029030314824
*Remainder: 443
*/

//Other program (source code):
/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10000

char * division(char [],unsigned long);
int main(){
    char a[MAX];
    unsigned long b;
    char *c;
    printf("Enter the divdend : ");
    scanf("%s",a);
    printf("Enter the divisor : ");
    scanf("%lu",&b);
    c = division(a,b);
    printf("\nQuotient of the division : ");
    printf("%s",c);
    return 0;
}

char * division(char a[],unsigned long b){
    static char c[MAX];
    int la;
    int i,k=0,flag=0;
    unsigned long temp=1,reminder;
    la=strlen(a);

    for(i=0;i<=la;i++){
         a[i] = a[i] - 48;
    }

    temp = a[0];
    reminder = a[0];
    for(i=1;i<=la;i++){
         if(b<=temp){
             c[k++] = temp/b;
             temp = temp % b;
             reminder = temp;
             temp =temp*10 + a[i];
             flag=1;

         }
         else{
             reminder = temp;
             temp =temp*10 + a[i];
             if(flag==1)
                 c[k++] = 0;
         }
    }

    for(i=0;i<k;i++){
         c[i]=c[i]+48;
    }
    c[i]= '\0';

    printf("Reminder of division:  %lu  ",reminder);
    return c;
}*/
/**
*Sample output:
*Enter the divdend:
*55555555555555555555555555555555555555555
*Enter the divisor: 5
*Reminder of division:  0
*Quotient of the division:
*11111111111111111111111111111111111111111
*
*
*Logic of the program Division of large numbers
*Algorithm:
*
*
*As we know in c there are not any such data types which can store a very large numbers.
*For example we want to solve the expression:
*
*
*
* 4928351200966342333331289107/34269
*
*
*
*Number 4928351200966342333331289107 is beyond the range of even long int or long double.
*Then question is how to store such a big numbers in c?
*
*Solution is very simple i.e. using array. Above program has used same logic that is we
*are using as usual logic to solve the expression except instead of storing the data in
*the normal variables we are storing into the array.
*/
