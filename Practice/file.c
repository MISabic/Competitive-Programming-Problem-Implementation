#include<stdio.h>

int main()
{
    char c,*fileLine[100];
    FILE *fp;
    fp=fopen("naruto.txt","+a");
    while ((c = fgetc(fp)) != EOF) {

        fprintf("%c",c);
    }
    fclose(fp);
}
