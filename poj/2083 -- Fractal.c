#include<stdio.h>

int main()
{
    int i,n;
    char arr[8][730]={"X",
                      "X",
                      "X X",
                      "X X   X X",
                      "X X   X X         X X   X X",
                      "X X   X X         X X   X X                           X X   X X         X X   X X",
                      "X X   X X         X X   X X                           X X   X X         X X   X X                                                                                 X X   X X         X X   X X                           X X   X X         X X   X X"},
        brr[8][730];
    while(scanf("%d",&n)==1 && n!=-1){
        for(i=0; i<(int)pow(3,n-1); i++){
            if(i%2==0) printf("%s %s\n",arr[n]);
            else printf("\n");
        }
    }
    return 0;
}
