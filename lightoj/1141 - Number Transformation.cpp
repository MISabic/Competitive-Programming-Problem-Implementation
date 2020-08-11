#include<bits/stdc++.h>
#define sz 1005
using namespace std;

vector<int>primesList;
int primes[1005];

void generatePrimes()
{
    int sqrtn=sqrt(sz);
    for(int i=3; i<=sqrtn; i+=2){
        if(!primes[i]){
            for(int j=i*i; j<=sz; j+=i+i){
                primes[j]=1;
            }
        }
    }
    primesList.push_back(2);
    for(int i=3; i<sz; i+=2){
        if(!primes[i])
            primesList.push_back(i) ;
    }
}

int main()
{
    generatePrimes();
    int t,s,d;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d %d",&s,&d);
        queue<pair<int,int>>st;
        st.push({s,0})
        while(!st.empty()){
            pair<int,int> x=st.top();
            st.pop();
            for(int j=0; j<primesList.size(); j++){

            }
        }
    }
}
