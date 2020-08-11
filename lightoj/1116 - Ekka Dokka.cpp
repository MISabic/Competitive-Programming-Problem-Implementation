#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long c,n;
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>n;
        if(n%2 || __builtin_popcount(n)==1) cout<<"Case "<<i<<": Impossible"<<endl;
        else{
            unsigned long long two=1;
            for(unsigned long long j=1; j<64; j++){
                two<<=1;
                if(!(n%two) && (n/two)%2){
                    cout<<"Case "<<i<<": "<<(n/two)<<" "<<two<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
