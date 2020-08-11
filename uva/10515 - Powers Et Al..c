#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char arr[150],brr[150];
    long int i,len1,len2,n1,n2,n3,p,c;
    while(scanf("%s %s",arr,brr)==2)
    {
        if(strcmp(arr,"0")==0 && strcmp(brr,"0")==0)
            break;
        len1=strlen(arr);
        len2=strlen(brr);
        n1=arr[len1-1]-'0';
        n2=brr[len2-1]-'0';
        n3=n2+(brr[len2-2]-'0')*10;
        if(strcmp(brr,"0")==0){
            printf("1\n");
            continue;
        }
        if(n3%4==0){
            p=pow(n1,4);
            printf("%ld\n",p%10);
        }
        else
        {
            c=0;
            for(i=n3; i>n3-8; i--)
            {
                if(i%4!=0)
                    ++c;
                else
                    break;
            }
            if(c==1)
                printf("%ld\n",n1);
            else{
                p=pow(n1,c);
                printf("%ld\n",p%10);
            }
        }
    }
    return 0;
}
