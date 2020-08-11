#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[1000000];
    int n;
    cin>>n;
    while(n--){
        scanf("%s",arr);
        int len=strlen(arr),a=0,b=0;
        for(int i=0; i<len; i++){
            if(arr[i]=='a') a++;
            else b++;
        }
        cout<< min((len-a),(len-b)) <<endl;
    }
    return 0;
}
