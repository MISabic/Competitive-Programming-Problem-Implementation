#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,len1,len2,len,i,j,k,l,flag;
    char a[205],b[205],total[205];
    scanf("%d",&n);
    while(n--){
        memset(a,'0',sizeof a);
        memset(b,'0',sizeof b);
        scanf("%s %s",&a,&b);
        len1=strlen(a),len2=strlen(b);
        for(i=len1-1; i>=0; i--)
            if(a[i]=='0') a[i]='\0',a[i+1]='0';
            else break;
        for(i=len2-1; i>=0; i--)
            if(b[i]=='0') b[i]='\0',b[i+1]='0';
            else break;
        len1=strlen(a),len2=strlen(b);
        (len1>len2) ? (len=len1) : (len=len2);
        a[len1]=b[len2]='0';
        j=l=flag=0;
        for(i=0; i<len; i++){
            k=(a[i]-'0')+(b[i]-'0');
            total[i]=((k+l)%10)+'0';
            l=(k+l)/10;
            if(total[i]!='0' && flag==0) flag=1;
            if(flag==1) printf("%c",total[i]);
        }
        if(l!=0) printf("%c",l+'0');
        printf("\n");
    }
    return 0;
}
