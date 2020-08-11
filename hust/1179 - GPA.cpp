#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

char ch[1000000];
int main()
{
    while(gets(ch)!=NULL)
    {
        int len=strlen(ch),flag=0,k=0;
        double c=0;
        for(int i=0; i<len; i++)
        {
            if(ch[i]=='A')
            {
                c+=4;
                ++k;
            }
            else if(ch[i]=='B')
            {
                c+=3;
                ++k;
            }
            else if(ch[i]=='C')
            {
                c+=2;
                ++k;
            }
            else if(ch[i]=='D')
            {
                c+=1;
                ++k;
            }
            else if(ch[i]=='F')
            {
                c+=0;
                ++k;
            }
            else if(!isspace(ch[i]))
                flag=1;
        }
        if(flag==0) printf("%.2f\n",c/k);
        else cout<<"Unknown letter grade in input"<<endl;
    }
    return 0;
}
