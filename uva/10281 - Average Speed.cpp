#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[100000];
    int h=0,m=0,s=0,h1=0,m1=0,s1=0,spd=0,spd1=0;
    double val=0;
    while(gets(arr)!=NULL){
        int n=sscanf(arr,"%d:%d:%d %d",&h,&m,&s,&spd1);
        val+=(((h-h1)*3600+(m-m1)*60+(s-s1))/3600.0)*spd;
        h1=h,m1=m,s1=s,spd=spd1;
        if(n==3)
            printf("%s %.2f km\n",arr,val);
    }
    return 0;
}
