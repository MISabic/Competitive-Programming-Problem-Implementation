#include<bits/stdc++.h>
using namespace std;

void pattern(char *pat,int *lps,int n)
{
    int i=0,j=1;
    lps[0]=0;
    while(j<n){
        if(pat[i]==pat[j]){
            ++i;
            lps[j]=i;
            ++j;
        }
        else{
            if(i!=0)
                i=lps[i-1];
            else{
                lps[j]=0;
                ++j;
            }
        }
    }
}

int kmp(char *txt,char *pat)
{
    int m=strlen(txt);
    int n=strlen(pat);
    int i=0,j=0,count=0;
    int *lps=(int*)malloc(sizeof(int)*n);
    pattern(pat,lps,n);
    while(i<=m){
        if(j==n){
            ++count;
            j=lps[j-1];
        }
        else if(txt[i]==pat[j])
            ++i,++j;
        else{
            if(j!=0)
                j=lps[j-1];
            else
                ++i;
        }
    }
    free(lps);
    return count;
}

int main()
{
    char txt[1000005],pat[1000005];
    int t,c=0;
    cin>>t;
    while(t--){
        scanf("%s %s",txt,pat);
        printf("Case %d: %d\n",++c,kmp(txt,pat));
    }
    return 0;
}
