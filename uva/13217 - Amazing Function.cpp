#include<bits/stdc++.h>
using namespace std;

int main()
{
    double arr[10000];
    arr[0]=pow(2,.5)+pow(3,.5)+pow(6,.5);
    for(int i=1; i<=10; i++){
        arr[i]=((arr[i-1]*arr[i-1])-5)/(2*arr[i-1]+4);
    }
    string str;
    while(cin>>str){
        if(str=="0") printf("%.10f\n",arr[0]);
        else if(str=="1") printf("%.10f\n",arr[1]);
        else if(str=="2") printf("%.10f\n",arr[2]);
        else if((str[str.length()-1]+'0')%2==1) printf("%.10f\n",arr[3]);
        else printf("%.10f\n",arr[4]);
    }
    return 0;
}
