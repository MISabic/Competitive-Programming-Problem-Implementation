#include<iostream>
#include<string>
using namespace std;

int main()
{
    string arr,brr;
    while(cin>>arr>>brr){
        int i=0;
        for(int j=0; j<brr.length(); j++){
            if(arr[i]==brr[j]){
                ++i;
            }
        }
        if(i==arr.length()) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
