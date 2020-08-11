#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,k=0;
    char arr[150];
    while(scanf("%d",&n)==1){
        scanf("%s",arr);
        if(n<3) printf("0\n");
        else{
            for(i=2; i<n; i++){
                if(arr[i]=='0' && arr[i-1]=='1' && arr[i-2]=='0'){
                    arr[i]='1';
                    ++k;
                }
            }
            printf("%d\n",k);
        }
        k=0;
    }
    return 0;
}
