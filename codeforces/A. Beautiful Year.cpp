#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[5];
    while(scanf("%d",&n)==1){
        int j=0;
        for(int i=n+1; ; i++){
            int k=i;
            while(k!=0){
                arr[j++]=k%10;
                k/=10;
            }
            int flag=0;
            for(j=0; j<4; j++){
                for(int p=0; p<4 && p!=j; p++){
                    if(arr[j]==arr[p])
                        flag=1;
                }
            }
            if(flag==0){
                cout<<i<<endl;
                break;
            }
            j=0;
        }
    }
    return 0;
}
