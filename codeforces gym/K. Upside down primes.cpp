#include<bits/stdc++.h>
using namespace std;

vector<long long>primes;
map<int,int>rev;

long long rever(long long n)
{
    long long sum=0;
    while(n!=0){
        int k=rev[n%10];
        if(n%10!=0 && k==0) return 0;
        sum=(sum*10)+k;
        n/=10;
    }
    return sum;
}

#define MAX 100000005
#define LIM 10000

int flagArr[MAX>>6];
#define ifComp(x) (flagArr[x>>6]&(1<<((x>>1)&31)))
#define isComp(x) (flagArr[x>>6]|=(1<<((x>>1)&31)))

void BitSeive()
{
       register int i,j,k;
       int sqrtn=sqrt(MAX);
       for(i=3;i<sqrtn;i+=2)
       {
              if(!ifComp(i))
              {
                     for(j=i*i,k=i<<1;j<MAX;j+=k)
                            isComp(j);
              }
       }
       primes.push_back(2);
       for(i=3;i<MAX;i+=2)
       {
              if(!ifComp(i))
              {
                     primes.push_back(i);
              }
       }
}

int main()
{
    BitSeive();
    rev[0]=0;
    rev[2]=2;
    rev[5]=5;
    rev[8]=8;
    rev[1]=1;
    rev[6]=9;
    rev[9]=6;
    long long n;
    while(scanf("%I64d",&n)==1){
        if(n==1 || rever(n)==0){
            printf("no\n");
            continue;
        }
        else{
            long long revval=rever(n);
            long long sqrtn=sqrt(n);
            int f=0;
            for(int i=0; i<primes.size() && primes[i]<=sqrtn; i++){
                if(n%primes[i]==0){
                    f=1;
                    break;
                }
            }
            sqrtn=sqrt(revval);
            for(int i=0; i<primes.size() && primes[i]<=sqrtn; i++){
                if(revval%primes[i]==0){
                    f=1;
                    break;
                }
            }
            if(f==0) printf("yes\n");
            else printf("no\n");
        }
    }
    return 0;
}
