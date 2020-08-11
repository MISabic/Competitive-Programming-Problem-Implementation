#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c,n;
    char arr[500][500],brr[500][500];
    while(scanf("%d %d %d",&r,&c,&n)==3){
        for(int i=1; i<=r; i++){
            scanf("%s",&arr[i]);
        }
        if(n%2==0){
            for(int i=0; i<r; i++){
                for(int j=0; j<c; j++){
                    printf("O");
                }
                printf("\n");
            }
        }
        else if(n%3==0 && n%2!=0){
            memset(brr,'O',sizeof(brr));
            for(int i=1; i<=r; i++){
                for(int j=0; j<c; j++){
                    if(arr[i][j]=='O'){
                        brr[i][j]='.';
                        brr[i+1][j]='.';
                        brr[i-1][j]='.';
                        brr[i][j+1]='.';
                        brr[i][j-1]='.';
                    }
                }//cout<<c<<endl;
                brr[r][c+1]='\0';
            }
            //cout<<brr[1]<<endl;
            for(int i=1; i<=r; i++){
                for(int j=0; j<c; j++){
                    printf("%c",brr[i][j]);
                }
                printf("\n");
            }
        }
        else{
            for(int i=1; i<=r; i++){
                printf("%s\n",arr[i]);
            }
        }
    }
    return 0;
}

