#include<bits/stdc++.h>
using namespace std;

int arr[20]={0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0};
int bin[100100];


void binary()
{
    for(int i=0; i<100010; i++){
        int n=i,k,c=0;
        while(n!=0){
            k=n%2;
            n/=2;
            if(k==1) c++;
        }
        if(arr[c]) bin[i]=bin[i-1]+1;
        else bin[i]=bin[i-1];
    }
}

int main()
{
    binary();
    int n,a,b;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&a,&b);
        printf("%d\n",bin[b]-bin[a-1]);
    }
    return 0;
}





