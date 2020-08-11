#include<bits/stdc++.h>
using namespace std;

vector<long long>vecA;
vector<long long>vecB;

void digitA(long long n)
{
    long long sum=0,c=0;
    vecA.push_back(n);

    while(1){
        ++c;
        while(n){
            long long dig=(n%10);
            sum+=(dig*dig);
            n=n/10;
        }
        n=sum;
        sum=0;
        vecA.push_back(n);
        if(c==100) break;
    }
}

void digitB(long long n)
{
    long long sum=0,c=0;
    vecB.push_back(n);

    while(1){
        ++c;
        while(n){
            long long dig=(n%10);
            sum+=(dig*dig);
            n=n/10;
        }
        n=sum;
        sum=0;
        vecB.push_back(n);
        if(c==100) break;
    }
}

int main()
{
    long long a,b;
    while(cin>>a>>b && (a || b)){
        long long f=0,res=999999999;
        digitA(a),digitB(b);
        for(int i=0; i<vecA.size(); i++){
            for(int j=0; j<vecB.size(); j++){
                if(vecA[i]==vecB[j]){
                    if((i+j+2)<res) res=(i+j+2);
                }
            }
        }
        if(res!=999999999) cout<<a<<" "<<b<<" "<<res<<endl;
        else cout<<a<<" "<<b<<" "<<0<<endl;
        vecA.clear(),vecB.clear();
    }
    return 0;
}
