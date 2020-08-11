/*#include<stdio.h>

int main()
{
    int t,a,b,c,d,i;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        i=b+d;
        printf("%d %d\n%d %d\n",c,i,a,i);
    }
    return 0;
}*/

/*
#include<stdio.h>

int main()
{
    int t,n,i,sum,arr[50];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        sum=n;
        for(i=0; i<n; i++){
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}*/


#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,j,h,w,count,k,l;
    char arr[150][150];
    scanf("%d",&t);
    while(t--){
        count=0;
        memset(arr,'.',sizeof arr);
        scanf("%d %d",&h,&w);
        for(i=0; i<h; i++){
            for(j=0; j<w; j++){
                scanf(" %c",&arr[i][j]);
            }
        }
        for(i=0; i<h; i++){
            for(j=0; j<w; j++){
                /*if(arr[i][j]=='O'){
                    arr[i][j]=arr[i+1][j]=arr[i+1][j-1]=arr[i+1][j+1]=arr[i+2][j-1]=arr[i+2][j+1]='.';
                    ++count;
                }
                else if(arr[i][j]=='|'){
                    arr[i][j]=arr[i-1][j]=arr[i][j-1]=arr[i][j+1]=arr[i+1][j-1]=arr[i+1][j+1]='.';
                    ++count;
                }
                else if(arr[i][j]=='/'){
                    arr[i][j]=arr[i][j+1]=arr[i][j+2]=arr[i-1][j+1]=arr[i+1][j]=arr[i+1][j+2]='.';
                    ++count;
                }

                else*/ if(arr[i][j]=='\\'){
                    arr[i][j]=arr[i][j-1]=arr[i][j-2]=arr[i-1][j-1]=arr[i+1][j]=arr[i+1][j-2]='.';
                    ++count;
                }
                for(k=0; k<h; k++){
                    for(l=0; l<w; l++){
                        printf("%c",arr[i][j]);
                    }
                    printf("\n");
                }
                /*else if(arr[i][j]=='('){
                    arr[i][j]=arr[i-1][j]=arr[i-2][j+1]=arr[i-1][j+1]=arr[i-1][j+2]=arr[i][j+2]='.';
                    ++count;
                }
                else if(arr[i][j]==')'){
                    arr[i][j]=arr[i][j-2]=arr[i-1][j]=arr[i-1][j-1]=arr[i-1][j-2]=arr[i-2][j-1]='.';
                    ++count;
                }*/
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
