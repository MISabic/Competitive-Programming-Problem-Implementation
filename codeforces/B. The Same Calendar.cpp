#include<bits/stdc++.h>
using namespace std;

bool leap(int n)
{
    if (n%400==0 || (n%4==0 && n%100!=0))
        return true;
    else
        return false;
}

int main()
{
    int n;
    while(scanf("%d",&n)==1){
        int i,k=1,a=1;
        for(i=n; ; i++){
            if(leap(i)) a+=2;
            else a++;

            if(a>=7) a=a-7;
            if(leap(n)){
                if(leap(i+1) && a==k){
                    break;}
            }
            else if(!leap(n)){
                if(!leap(i+1) && a==k)
                    break;
            }
        }
        cout<<i+1<<endl;
    }
    return 0;
}
