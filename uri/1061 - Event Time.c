#include<stdio.h>

int main()
{
    int d1,h1,m1,s1,d2,h2,m2,s2,t;
    char arr[4],brr[4];
    while(scanf("%s %d %d : %d : %d",arr,&d1,&h1,&m1,&s1)==5){
        scanf("%s %d %d : %d : %d",brr,&d2,&h2,&m2,&s2);
        t=(d2-d1-1)*86400+(86400-(h1*3600+m1*60+s1))+(h2*3600+m2*60+s2);
        printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",t/86400,(t%86400)/3600,((t%86400)%3600)/60,((t%86400)%3600)%60);
    }
    return 0;
}
