#include<bits/stdc++.h>
#define max 1005
using namespace std;

int arr[max];
vector<int> primes;
int nod[max];

void seive()
{
    memset(arr,0,sizeof(arr));
    primes.push_back(2);
    int n=sqrt(max);
    for(int i=3; i<=n; i+=2)
    {
        if(arr[i]==0)
        {
            primes.push_back(i);
            for(int j=i*i; j<max; j+=i+i)
            {
                arr[j]=1;
            }
        }
    }
    for(int i=315; i<max; i+=2)
    {
        if(arr[i]==0)
        {
            primes.push_back(i);
        }
    }
}

int NOD(int n)
{
    int sqrtn=sqrt(n);
    int res=1;
    for(int i=0; i<primes.size() && primes[i]<=sqrtn; i++)
    {
        if(n%primes[i]==0)
        {
            int p=0;
            while(n%primes[i]==0)
            {
                n/=primes[i];
                p++;
            }
            sqrtn=sqrt(n);
            p++;
            res*=p;
        }
    }
    if(n!=1)
    {
        res*=2;
    }
    return res;
}

bool comp(pair<int,int> &pi1, pair<int,int> &pi2)
{
    if(pi1.first<pi2.first)
        return true;
    else if(pi1.first==pi2.first && pi1.second>pi2.second)
        return true;
    else
        return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    seive();
    int c,n;
    pair<int,int>pi[1002];
    for(int i=1; i<=1000; i++)
    {
        pi[i]= {NOD(i),i};
    }
    sort(pi,pi+1001,comp);

    scanf("%d",&c);
    for(int i=1; i<=c; i++){
        scanf("%d",&n);
        printf("Case %d: %d\n",i,pi[n].second);
    }
    return 0;
}
