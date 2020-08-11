#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    char arr[105];
    while(scanf("%d %d",&n,&k)==2){
        scanf("%s",arr);
        for(int j=0; j<k; j++){
            for(int i=0; i<n-1; i++){
                if(arr[i]=='B' && arr[i+1]=='G'){
                    arr[i]='G',arr[i+1]='B';
                    ++i;
                }
            }
        }
        printf("%s\n",arr);
    }
    return 0;
}
