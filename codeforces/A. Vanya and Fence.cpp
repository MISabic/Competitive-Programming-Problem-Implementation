#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,arr[2100];
    while(scanf("%d %d",&n,&h)==2){
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
        int c=0;
        for(int i=0; i<n; i++)
            if(arr[i]>h) c+=2;
            else c++;
        printf("%d\n",c);
    }
    return 0;
}

