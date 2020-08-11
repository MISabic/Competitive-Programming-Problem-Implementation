#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[20];
    string str;
    arr[0]=2,arr[1]=7,arr[2]=2,arr[3]=3,arr[4]=3,arr[5]=4,arr[6]=2,arr[7]=5,arr[8]=1,arr[9]=2;
    while(cin>>str){
        cout<<arr[str[0]-'0']*arr[str[1]-'0']<<endl;
    }
    return 0;
}
