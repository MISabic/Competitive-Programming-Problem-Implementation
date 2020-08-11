#include<cstdio>
#include<cstring>

int main()
{
    int t,n;
    char txt[101010],pat[101010];
    scanf("%d",&t);
    while(t--){
        scanf(" %s %d",txt,&n);
        for(int i=0; i<n; i++){
            scanf("%s",pat);
            int n=strlen(txt),m=strlen(pat),flag=0;
            for(int i=m-1; i>=0; i--){
                if(txt[i]!=pat[i]){
                    flag=1;
                    break;
                }
            }
            if(flag==0) printf("y\n");
            else printf("n\n");
        }
    }
    return 0;
}
