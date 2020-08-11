#include<bits/stdc++.h>
using namespace std;

int to_int(int x)
{
    int decimal=0,power=0;
    while(x){
        decimal+=(x%10)*(1<<power);
        x/=10;
        ++power;
    }
    return decimal;
}

int main()
{
    int t,a,b,c,d,e,f,g,h;
    cin>>t;
    for(int i=1; i<=t; i++){
        scanf("%d.%d.%d.%d",&a,&b,&c,&d);
        scanf("%d.%d.%d.%d",&e,&f,&g,&h);
        if(a==to_int(e) && b==to_int(f) && c==to_int(g) && d==to_int(h)) cout<<"Case "<<i<<": Yes"<<endl;
        else cout<<"Case "<<i<<": No"<<endl;
    }
    return 0;
}
