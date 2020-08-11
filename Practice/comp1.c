#include <stdio.h>

char *after, arr[100],crr[100],tree[5],ch,rh;
int i,j,l,o,q,p=0,k=0,n,m=0,r=0,s=0;

char *replace(const char src[], const char sea[], const char rep[])
{
    char temp[1000];
    strcpy(temp,src);
    if(strstr(src,sea)==NULL)
    {
        return src;
    }
    else
    {
        size_t n=strlen(temp);
        size_t m=strlen(strstr(temp,sea));
        size_t p=strlen(sea);
        int count=n-m;
        temp[count]='\0';
        int found=count+p;
        strcat(temp,rep);
        strcat(temp,&src[found]);
        strcpy(src,temp);
        return src;
    }
}
char treeNum(int m)
{
    if(m>9)
    {
        r=m/10, s=m%10;
        ch=r+'0';
        rh=s+'0';
        tree[0]='t';
        tree[1]=ch;
        tree[2]=rh;
        tree[3]='\0';
    }
    else
    {
        ch=m+'0';
        tree[0]='t';
        tree[1]=ch;
        tree[2]='\0';
    }
}
void treeStyle(char ph, char arr[])
{
    for(i=0; i<n; i++)
    {
        if(strchr(arr,ph)==NULL)
            break;
        else if(arr[i]==ph)
        {
            p=0;
            for(j=i+1; j<n; j++)
                if(arr[j]=='+' || arr[j]=='-' || arr[j]=='/' || arr[j]=='*' || arr[j]=='(' || arr[j]==')')
                    break;

            for(l=i-1; l>=0; l--)
                if(arr[l]=='+' || arr[l]=='-' || arr[l]=='/' || arr[l]=='*' || arr[l]=='(' || arr[l]==')')
                    break;

            for(o=l+1; o<j; o++)
            {
                crr[p]=arr[o];
                ++p;
            }
            crr[p]='\0';
            ++m;
            printf("t%d = %s\n",m,crr);
            treeNum(m);
            after = replace(arr, crr, tree);
            strcpy(arr,after);
            i=0;
        }
    }
}
int main()
{
    gets(arr);
    n=strlen(arr);
    for(i=0; i<n; i++)
        if(arr[i]=='(')
        {
            p=0;
            for(j=i; j<n; j++)
                if(arr[j]==')')
                    break;
            for(o=i; o<=j; o++)
            {
                crr[p]=arr[o];
                ++p;
            }
            crr[p]='\0';
            ++m;
            printf("t%d = %s\n",m,crr);
            treeNum(m);
            after = replace(arr, crr, tree);
            strcpy(arr,after);
        }
    treeStyle('/', arr);
    treeStyle('*', arr);
    treeStyle('+', arr);
    treeStyle('-', arr);
}
