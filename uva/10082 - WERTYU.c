#include<stdio.h>
#include<string.h>

int main()
{
    int len,i,n=0;
    char ch,arr[100],crr[100];
    while(gets(crr))
    {
        len=strlen(crr);
        for(i=0; i<len; i++)
        {
            if(crr[i]=='1')
                arr[n++]='`';
            else if(crr[i]=='2')
                arr[n++]='1';
            else if(crr[i]=='3')
                arr[n++]='2';
            else if(crr[i]=='4')
                arr[n++]='3';
            else if(crr[i]=='5')
                arr[n++]='4';
            else if(crr[i]=='6')
                arr[n++]='5';
            else if(crr[i]=='7')
                arr[n++]='6';
            else if(crr[i]=='8')
                arr[n++]='7';
            else if(crr[i]=='9')
                arr[n++]='8';
            else if(crr[i]=='0')
                arr[n++]='9';
            else if(crr[i]=='-')
                arr[n++]='0';
            else if(crr[i]=='=')
                arr[n++]='-';
            else if(crr[i]=='W')
                arr[n++]='Q';
            else if(crr[i]=='E')
                arr[n++]='W';
            else if(crr[i]=='R')
                arr[n++]='E';
            else if(crr[i]=='T')
                arr[n++]='R';
            else if(crr[i]=='Y')
                arr[n++]='T';
            else if(crr[i]=='U')
                arr[n++]='Y';
            else if(crr[i]=='I')
                arr[n++]='U';
            else if(crr[i]=='O')
                arr[n++]='I';
            else if(crr[i]=='P')
                arr[n++]='O';
            else if(crr[i]=='[')
                arr[n++]='P';
            else if(crr[i]==']')
                arr[n++]='[';
            else if(crr[i]=='\\')
                arr[n++]=']';
            else if(crr[i]=='S')
                arr[n++]='A';
            else if(crr[i]=='D')
                arr[n++]='S';
            else if(crr[i]=='F')
                arr[n++]='D';
            else if(crr[i]=='G')
                arr[n++]='F';
            else if(crr[i]=='H')
                arr[n++]='G';
            else if(crr[i]=='J')
                arr[n++]='H';
            else if(crr[i]=='K')
                arr[n++]='J';
            else if(crr[i]=='L')
                arr[n++]='K';
            else if(crr[i]==';')
                arr[n++]='L';
            else if(crr[i]=='\'')
                arr[n++]=';';
            else if(crr[i]=='X')
                arr[n++]='Z';
            else if(crr[i]=='C')
                arr[n++]='X';
            else if(crr[i]=='V')
                arr[n++]='C';
            else if(crr[i]=='B')
                arr[n++]='V';
            else if(crr[i]=='N')
                arr[n++]='B';
            else if(crr[i]=='M')
                arr[n++]='N';
            else if(crr[i]==',')
                arr[n++]='M';
            else if(crr[i]=='.')
                arr[n++]=',';
            else if(crr[i]=='/')
                arr[n++]='.';
            else
                arr[n++]=crr[i];
        }
    arr[n]='\0';
    printf("%s\n",arr);
    n=0;
    }
    return 0;
}
