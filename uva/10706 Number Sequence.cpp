#include<bits/stdc++.h>
using namespace std;

char arr[2147647],chr[1000000];

int main()
{
    freopen("input.txt","w",stdout);
    string str,num;
    arr[0]='1',arr[1]='\0';
    for(int i=1; i<=50; i++){
        stringstream ss;
        ss<<i;
        ss>>num;
        str+=num;
        ss.clear();
        ss<<num;
        ss>>chr;//cout<<str<<endl;
        printf("%s\n",str.c_str());
        strcat(arr,chr);
    }
    //str+=1;
    //cout<<arr<<endl;
    return 0;
}

