#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ch[27];
    char arr[5000];
    while(scanf("%d",&n)==1){
        scanf("%s",arr);
        int len=strlen(arr);
        memset(ch,0,sizeof(ch));
        for(int i=0; i<len; i++){
            ch[(int)arr[i]-96]++;
        }
        int k,flag=0;
        for(int i=1; i<=26; i++){
            if(ch[i]!=0 && ch[i]%n!=0){
                printf("-1\n");
                flag=1;
                break;
            }
            else{
                ch[i]=ch[i]/n;
            }
        }
        if(flag!=1){
            int p=0;
            char str[5000];
            for(int i=1; i<=26; i++){
                if(ch[i]!=0){
                    for(int j=0; j<ch[i]; j++)
                        str[p++]=(char)(i+96);
                }
            }
            str[p]='\0';
            for(int i=0; i<n; i++)
                printf("%s",str);
            printf("\n");
        }
    }
    return 0;
}

