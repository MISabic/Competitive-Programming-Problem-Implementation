#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,n,k,i;
    scanf("%d",&t);
    while(t--){
        k=1;
        scanf("%d",&n);
        for(i=1; i<=n; i++){
            if(i%2!=0){
                k*=2;
            }
            else
                k+=1;
        }
        printf("%d\n",k);
    }
    return 0;
}
