#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char pre[1010][100000];

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

int main()
{
    int n,a,i,j,k,l,q,div,rem,rem1,div1,len1,len2,len3,num=0,p=0,count=0,plug=0,flag=0,found=0,keep;
    char arr[100000]="2",*brr,*crr,*drr;
    for(i=3; i<=1005; i++)
    {
        brr=calloc(100000,1);
        crr=calloc(100000,1);
        drr=calloc(100000,1);
        num=0,p=0,count=0,plug=0,flag=0,found=0;
        div=i;
        num=0,p=0;
        if(i<=9)
        {
            while(div)
            {
                rem=div%10;
                div=div/10;
                len1=strlen(arr);
                for(j=0; j<len1; j++)
                {
                    num=num+rem*(arr[j]-'0');
                    brr[p++]=(num%10)+'0';
                    num=num/10;
                }
                brr[p++]=num+'0';
                brr[p]='\0';
            }
        }
        else
        {
            count=1;
            plug=0;
            while(div)
            {
                p=0;
                rem=div%10;
                div=div/10;
                if(plug==0)
                {
                    len1=strlen(arr);
                    for(j=0; j<len1; j++)
                    {
                        num=num+rem*(arr[j]-'0');
                        brr[p++]=(num%10)+'0';
                        num=num/10;
                    }
                    if(num!=0)
                        brr[p++]=(num+'0');
                    else
                        brr[p++]='\0';
                    plug=1;
                }
                else
                {
                    len1=strlen(arr);
                    num=0;
                    for(j=0; j<len1; j++)
                    {
                        num=num+rem*(arr[j]-'0');
                        crr[p++]=(num%10)+'0';
                        num=num/10;
                    }
                    if(num!=0)
                        crr[p++]=(num+'0');
                    else
                        crr[p++]='\0';
                    flag=1;
                }
                if(flag==1)
                {
                q=l=count;
                len3=strlen(brr);
                rem1=div1=0;
                for(l; l<len3; l++)
                {
                    keep=((brr[l]-'0')+(crr[l-q]-'0'))+div1;
                    rem1=keep%10;
                    brr[l]=(rem1)+'0';
                    div1=keep/10;
                }
                len3=strlen(crr);
                for(l; l<=len3;  l++)
                    brr[l]=((crr[l-1]-'0')+div1)+'0';
                if(len3<l)
                    brr[l]=(div1+'0');
                count++;
                }
            }
            flag=0;
        }
        strcpy(arr,brr);
        strcpy(drr,brr);
        len2=strlen(drr);
        for(k=len2-1; k>=0; k--)
        {
            if(drr[k]!='0')
            {
                drr[k+1]='\0';
                break;
            }
        }
        strcpy(pre[i],strrev(drr));
    }
    while(scanf("%d",&n)==1)
    {
        if(n==0 || n==1)
            printf("%d!\n1\n",n);
        else if(n==2)
            printf("%d!\n2\n",n);
        else
            printf("%d!\n%s\n",n,pre[n]);
    }
    return 0;
}

/*
#include<stdio.h>
#define max 1001
#define len 2600

int fact[max][len];

void calc()
{
int i,j,k;
fact[0][0]=fact[1][0]=1;
for(i=2;i<max;i++)
{
for(j=0;j<len;j++)
{
fact[i][j]+=fact[i-1][j]*i;
if(fact[i][j]>9)
{
fact[i][j+1]+=fact[i][j]/10;
fact[i][j]%=10;
}
}
}
}

int main()
{
long i,j,n;
calc();
while(scanf("%ld",&n)==1)
{
printf("%ld!\n",n);
for(i=len-1;i>0;i--)
if(fact[n][i]!=0)
break;
for(;i>=0;i--)
printf("%d",fact[n][i]);
printf("\n");
}
return 0;
}*/

