#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    string str;
    while(cin>>str){
        memset(arr,0,sizeof(arr));
        for(int i=0; i<str.length(); i++){
            if(str[i]=='U') ++arr[0];
            if(str[i]=='D') ++arr[1];
            if(str[i]=='R') ++arr[2];
            if(str[i]=='L') ++arr[3];
        }
        int fmn=min(arr[0],min(arr[1],min(arr[2],arr[3])));
        arr[0]-=fmn,arr[1]-=fmn,arr[2]-=fmn,arr[3]-=fmn;
        if(arr[0]==0 || arr[1]==0){
            int f1=min(arr[2],arr[3]);
            arr[2]-=f1,arr[3]-=f1;
        }
        else if(arr[2]==0 || arr[3]==0){
            int f2=min(arr[0],arr[1]);
            arr[0]-=f2,arr[1]-=f2;
        }
        int k=arr[0]%2+arr[1]%2+arr[2]%2+arr[3]%2;
        if(k%2==0){
            if(k==0)
                cout<<(arr[0]/2+arr[1]/2+arr[2]/2+arr[3]/2)<<endl;
            else
                cout<<(arr[0]/2+arr[1]/2+arr[2]/2+arr[3]/2+1)<<endl;
        }
        else
            cout<<-1<<endl;
    }
    return 0;
}

