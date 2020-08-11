#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    while(scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4])==5){
        int c=0;
        for(int i=1; i<=arr[4]; i++){
            if(i%arr[0]==0 || i%arr[1]==0 || i%arr[2]==0 || i%arr[3]==0)
                ++c;
        }
        cout<<c<<endl;
    }
    return 0;
}


