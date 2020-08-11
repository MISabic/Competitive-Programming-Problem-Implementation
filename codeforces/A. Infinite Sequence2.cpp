#include<bits/stdc++.h>
#define pf printf
using namespace std;

int main(){
    long long add = 100000000005,a,b,c;
    cin >> a >> b >> c;
    a += add;
    b += add;
    if(b == a){
        pf("YES\n");
        return 0;
    }
    if(c == 0){
        pf("NO\n");
        return 0;
    }
    if(c>0 && b<a){
        pf("NO\n");
        return 0;
    }
    if(c<0 && b>a){
        pf("NO\n");
        return 0;
    }
    c = abs(c);
    if(b%c == a%c){
        pf("YES\n");
    }else{
        pf("NO\n");
    }
    return 0;
}
