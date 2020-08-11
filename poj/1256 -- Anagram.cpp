#include<cstdio>
#include<cstring>
#include<cctype>
#include<algorithm>
#include<functional>

using namespace std;

bool cmp(char a,char b)
{
    if(tolower(a)==tolower(b)) return a<b;
    return tolower(a)<tolower(b);
}

int main()
{
    char arr[15];
    int t,len,i,k;
    scanf("%d",&t);
    while(t--){
        scanf("%s",arr);
        len=strlen(arr);
        sort(arr,arr+len,cmp);
        printf("%s\n",arr);
        while(next_permutation(arr,arr+len,cmp)){
            printf("%s\n",arr);
        }
    }
    return 0;
}


/*
#include<cstdio>
#include<cstring>
#include<cctype>
#include<algorithm>
using namespace std;
char str[20];
bool cmp(char a,char b)
{
    //if(islower(a)&&islower(b))   return a<b;
    //if(isupper(a)&&isupper(b))   return a<b;
    //if(islower(a)&&isupper(b))   return a<(b-'A'+'a');
    //if(isupper(a)&&islower(b))   return a<=(b-'a'+'A');
    if(tolower(a)==tolower(b))  return a<b;
    return tolower(a)<tolower(b);
}
int main()
{
    int T;
    while(scanf("%d",&T)!=EOF)
    {
        while(T--)
        {
            scanf("%s",str);
            int n=strlen(str);
            sort(str,str+n,cmp);
            printf("%s\n",str);
            while(next_permutation(str,str+n,cmp))
            printf("%s\n",str);
        }
    }
    return 0;
}*/

