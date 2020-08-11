/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int intSort(const int* a, const int* b)
{
    return (*a-*b);
}

int main()
{
    long int *count,i,n,len,max,j;
    int flag=0;
    char arr[500];
    scanf("%ld",&n);
    while(n!=0)
    {
        count=calloc(26,sizeof(long int));
        if(flag==0){
            getc(stdin);
            flag=1;
        }
        gets(arr);
        len=strlen(arr);
        for(i=0; i<len; i++)
        {
            switch(tolower(arr[i]))
            {
            case 'a':
                count[0]++;
                break;
            case 'b':
                count[1]++;
                break;
            case 'c':
                count[2]++;
                break;
            case 'd':
                count[3]++;
                break;
            case 'e':
                count[4]++;
                break;
            case 'f':
                count[5]++;
                break;
            case 'g':
                count[6]++;
                break;
            case 'h':
                count[7]++;
                break;
            case 'i':
                count[8]++;
                break;
            case 'j':
                count[9]++;
                break;
            case 'k':
                count[10]++;
                break;
            case 'l':
                count[11]++;
                break;
            case 'm':
                count[12]++;
                break;
            case 'n':
                count[13]++;
                break;
            case 'o':
                count[14]++;
                break;
            case 'p':
                count[15]++;
                break;
            case 'q':
                count[16]++;
                break;
            case 'r':
                count[17]++;
                break;
            case 's':
                count[18]++;
                break;
            case 't':
                count[19]++;
                break;
            case 'u':
                count[20]++;
                break;
            case 'v':
                count[21]++;
                break;
            case 'w':
                count[22]++;
                break;
            case 'x':
                count[23]++;
                break;
            case 'y':
                count[24]++;
                break;
            case 'z':
                count[25]++;
                break;
            }
        }
        for(i=0; i<26; i++)
        printf("%ld\n",count[i]);
        max=count[0];
        j=0;
        for(i=1; i<=25; i++)
            if(max<count[i]){
                max=count[i];
                j=i;
                printf("%ld %ld %ld\n",j,max,count[i]);
                //max=i;
            }
        //printf("%ld\n",j);
        //printf("%c\n",j+97);
        for(i=0; i<=25; i++)
        {
            if(count[j]==count[i])
                printf("%c",i+97);
        }
        //qsort(count,26,sizeof(long int),(int(*)(const void*, const void*))intSort);
        //for(i=0; i<26; i++)
        printf("\n");
        free(count);
        --n;
    }
}*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    long int *count,i,n,len,max,j;
    int flag=0;
    char arr[500];
    scanf("%ld",&n);
    while(n!=0)
    {
        count=calloc(26,sizeof(long int));
        if(flag==0){
            getc(stdin);
            flag=1;
        }
        gets(arr);
        len=strlen(arr);
        for(i=0; i<len; i++)
        {
            switch(tolower(arr[i]))
            {
            case 'a':
                count[0]++;
                break;
            case 'b':
                count[1]++;
                break;
            case 'c':
                count[2]++;
                break;
            case 'd':
                count[3]++;
                break;
            case 'e':
                count[4]++;
                break;
            case 'f':
                count[5]++;
                break;
            case 'g':
                count[6]++;
                break;
            case 'h':
                count[7]++;
                break;
            case 'i':
                count[8]++;
                break;
            case 'j':
                count[9]++;
                break;
            case 'k':
                count[10]++;
                break;
            case 'l':
                count[11]++;
                break;
            case 'm':
                count[12]++;
                break;
            case 'n':
                count[13]++;
                break;
            case 'o':
                count[14]++;
                break;
            case 'p':
                count[15]++;
                break;
            case 'q':
                count[16]++;
                break;
            case 'r':
                count[17]++;
                break;
            case 's':
                count[18]++;
                break;
            case 't':
                count[19]++;
                break;
            case 'u':
                count[20]++;
                break;
            case 'v':
                count[21]++;
                break;
            case 'w':
                count[22]++;
                break;
            case 'x':
                count[23]++;
                break;
            case 'y':
                count[24]++;
                break;
            case 'z':
                count[25]++;
                break;
            }
        }
        max=count[0];
        j=0;
        for(i=1; i<=25; i++)
            if(max<count[i]){
                max=count[i];
                j=i;
            }
        for(i=0; i<=25; i++)
        {
            if(count[j]==count[i])
                printf("%c",i+97);
        }
        printf("\n");
        free(count);
        --n;
    }
    return 0;
}
