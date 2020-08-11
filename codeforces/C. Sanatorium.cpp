#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long arr[5];
    while(cin>>arr[0]>>arr[1]>>arr[2]){
        sort(arr,arr+3);
        if(arr[1]==arr[2] && arr[1]!=arr[0])
            cout<<(arr[2]-arr[0]-1)<<endl;
        else
            cout<< max(0LL,((arr[2]-arr[1]-1)+(arr[2]-arr[0]-1))) <<endl;
    }
    return 0;
}


/*

 #include<bits/stdc++.h>
using namespace std;

int main()
{
    long long arr[5];
    while(cin>>arr[0]>>arr[1]>>arr[2]){
        sort(arr,arr+3);
        if(arr[0]==arr[1] && arr[1]==arr[2]){
            cout<<0<<endl;
        }
        else if(arr[1]==arr[2]){
            cout<<(arr[2]-arr[0]-1)<<endl;
        }
        else if(arr[0]==arr[1]){
            cout<<(arr[2]-arr[0]-1)+(arr[2]-arr[1]-1)<<endl;
        }
        else{
            cout<<(arr[2]-arr[1]-1)+(arr[2]-arr[0]-1)<<endl;
        }
    }
    return 0;
}
*/
