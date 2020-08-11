#include<stdio.h>
#include<string.h>
#include<math.h>

char drr[20],ch,*hex0="0000",*hex1="1000",*hex2="0100",*hex3="1100",*hex4="0001",*hex5="1010",*hex6="0110",
    *hex7="1110",*hex8="0001",*hex9="1001",*hexa="0101",*hexb="1101",*hexc="0011",*hexd="1011",*hexe="0111",*hexf="1111";

char *exarr(char arr[], int len)
{
    int i,j=0;
    char prr[30];
    for(i=len-1; i>=0; i--)
    {
        if(arr[i]=='0')
            strcpy(&prr[j],hex0);
        else if(arr[i]=='1')
            strcpy(&prr[j],hex1);
        else if(arr[i]=='2')
            strcpy(&prr[j],hex2);
        else if(arr[i]=='3')
            strcpy(&prr[j],hex3);
        else if(arr[i]=='4')
            strcpy(&prr[j],hex4);
        else if(arr[i]=='5')
            strcpy(&prr[j],hex5);
        else if(arr[i]=='6')
            strcpy(&prr[j],hex6);
        else if(arr[i]=='7')
            strcpy(&prr[j],hex7);
        else if(arr[i]=='8')
            strcpy(&prr[j],hex8);
        else if(arr[i]=='9')
            strcpy(&prr[j],hex9);
        else if(arr[i]=='A')
            strcpy(&prr[j],hexa);
        else if(arr[i]=='B')
            strcpy(&prr[j],hexb);
        else if(arr[i]=='C')
            strcpy(&prr[j],hexc);
        else if(arr[i]=='D')
            strcpy(&prr[j],hexd);
        else if(arr[i]=='E')
            strcpy(&prr[j],hexe);
        else if(arr[i]=='F')
            strcpy(&prr[j],hexf);
        j+=4;
    }
    strcpy(drr,prr);
    return drr;
}

char *strrev(char *s)
{
    char *real,*forward,temp;
    real=s;
    forward=s;
    while(*s)
        s++;
    while(forward<s)
    {
        temp = *(--s);
        *s = *forward;
        *forward++ = temp;
    }
    return real;
}

int binary(char arr[])
{
    int i,j=0,num,count=0;
    for(i=12; i>=0; i--)
    {
        num=arr[i]-'0';
        count+=(num*pow(2,j++));
    }
    return count;
}

int main()
{
    int n,i,j,len1,len2,keep1,keep2,count1,count2;
    char arr[20],brr[20];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s %c %s",arr,&ch,brr);
        len1=strlen(arr);
        keep1=4*len1;
        strcpy(arr,exarr(arr,len1));
        for(i=keep1; i<13; i++)
            arr[i]='0';
        arr[i]='\0';
        strcpy(arr,strrev(arr));
        count1=binary(arr);

        len2=strlen(brr);
        keep2=4*len2;
        strcpy(brr,exarr(brr,len2));
        for(i=keep2; i<13; i++)
            brr[i]='0';
        brr[i]='\0';
        strcpy(brr,strrev(brr));
        count2=binary(brr);

        if(ch=='+')
            printf("%s %c %s = %d\n",arr,ch,brr,count1+count2);
        else
            printf("%s %c %s = %d\n",arr,ch,brr,count1-count2);
    }
    return 0;
}
