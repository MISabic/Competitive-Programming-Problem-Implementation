/*#include<stdio.h>

int arr(int *ptr, int i)
{
    int j;
    for(j=0; j<i; j++)
    {
        printf("%d\n", *ptr);
        *ptr+=2;
    }
}
int main()
{
    int i, *ptr, *ctr, crr[5]={1,2,7,4,5}, x=20;
    ptr=arr;
    ctr=&x;
    i=*ctr+2;
    arr(crr, 5);
    printf("%d\n",ctr);
    printf("%d",i);
}*/


#include <stdio.h>
int main()
{
    int i,j,k;
    char name[100], naruto[100];
    printf("Just type : ");
    gets(name);
    j=strlen(name);
    printf("Type again : ");
    gets(naruto);
    k=strlen(naruto);

    if(j>k)
    {
        for(i=0; i<j; i++)
    {
       //for(j=0; j<k)
        if(i<k)
            printf("%c%c", name[i],naruto[i]);
        else
            printf("%c", name[i]);

    }
    }

    else
    {
        for(i=0; i<k; i++)
    {
       //for(j=0; j<k)
        if(i<j)
            printf("%c%c", name[i],naruto[i]);
        else
            printf("%c", naruto[i]);

    }
    }


  /*  if(k>j)
    {
    for(i=0; i<j; i++)
    {
       //for(j=0; j<k)
        if(i<j && i<k)
            printf("%c%c", name[i],naruto[i]);
        else if(i>=j)
            printf("%c", name[i]);
    }
    }*/
//    puts(name[i]);
    return 0;
}

