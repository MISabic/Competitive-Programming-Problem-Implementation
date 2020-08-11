#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[11],brr[11];
    cin>>n;
    cout<<"Lumberjacks:\n";
    while(n--){
        int flag=0;
        for(int i=0; i<10; i++) cin>>arr[i];
        for(int i=1; i<8; i++)
            if(arr[i]>arr[i+1] && arr[i]>arr[i-1] || arr[i]<arr[i+1] && arr[i]<arr[i-1]) flag=1;
        if(flag==1 || (arr[0]<arr[1] && arr[1]>arr[2]) || (arr[0]>arr[1] && arr[1]<arr[2]) || (arr[9]<arr[8] && arr[8]>arr[7]) || (arr[9]>arr[8] && arr[8]<arr[7])) printf("Unordered\n");
        else printf("Ordered\n");
    }
    return 0;
}
