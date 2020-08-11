/*#include <stdio.h>
#include <string.h>
#include<conio.h>

void find_str(char const* str, char const* substr)
{
    char* pos = strstr(str, substr);
    if(pos) {
        printf("found the string '%s' in '%s' at position: %ld\n", substr, str, pos - str);
    } else {
        printf("the string '%s' was not found in '%s'\n", substr, str);
    }
}

int strdel_with_range(char *s, char *from, char *to){
    //code of validation here (omitted)
    memmove(from, to+1, strlen(to+1)+1);//strlen(to+1)(length of rest)+1(null-terminator)
}

int main(){
	FILE *fp1, *fp2;
   	char ch[1000], *ph;
	char *start, *end;
   	fp1 = fopen("Sample.txt", "r");
   	fp2 = fopen("Output.txt", "w");



while( fgetc(fp1)!= EOF)
   {
//+1 : point to '/' (end point to '*')
    fgets(ch, sizeof(ch), fp1);
    fputs(ch, fp2);
   }
 //   gets(ch);
    find_str(ch, "/*");
    find_str(ch, "*\/");

    fclose(fp1);
    fclose(fp2);

    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>

void strdel_with_range(char *s, char *from, char *to){
    //code of validation here (omitted)
    memmove(from, to+1, strlen(to+1)+1);//strlen(to+1)(length of rest)+1(null-terminator)
}

int main(void)
{
    char data[100];
    char *start, *end;
    /*start = strchr(data[0], '(');
    end   = strchr(start, ')');
    strdel_with_range(data[0], start, end+1);//+1 : point to space after ')'*\/

    gets(data);
    start = strstr(data, "/*");
    end   = strstr(start, "*\/");
    strdel_with_range(data[1], start, end+1);//+1 : point to '/' (end point to '*')

    puts(data);//blah blah blah
    return 0;
}
*/


#include <string.h>
#include <stdio.h>

void find_str(char const* str, char const* substr)
{
    char* pos = strstr(str, substr);
    if(pos) {
        printf("found the string '%s' in '%s' at position: %ld\n", substr, str, pos - str);
    } else {
        printf("the string '%s' was not found in '%s'\n", substr, str);
    }
}

int main(void)
{
    char* str = "one \*two *\nthree";
    find_str(str, "two");
    find_str(str, "/");
    find_str(str, "/");
    find_str(str, "nine");
    find_str(str, "n");

    return 0;
}
