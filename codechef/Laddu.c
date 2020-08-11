#include<stdio.h>
#include<string.h>

int main()
{
    int t,n,count,k,j;
    char arr[100];
    scanf("%d",&t);
    while(t--){
        scanf("%d %s",&n,arr);
        (strcmp(arr,"INDIAN")==0) ? (k=200) : (k=400);
        count=0;
        while(n--){
            scanf("%s",arr);
            if(strcmp(arr,"TOP_CONTRIBUTOR")==0) (count+=300);
            else if(strcmp(arr,"CONTEST_HOSTED")==0) (count+=50);
            else if(strcmp(arr,"BUG_FOUND")==0 || strcmp(arr,"CONTEST_WON")==0){
                scanf("%d",&j);
                (strcmp(arr,"BUG_FOUND")==0) ? (count+=j) : (count+=0);
                if(strcmp(arr,"CONTEST_WON")==0){
                     if(j<=20) count+=300+(20-j);
                     else count+=300;
                }
            }
        }
        printf("%d\n",count/k);
    }
    return 0;
}
