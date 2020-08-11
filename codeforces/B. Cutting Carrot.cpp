#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
using namespace std;

int n,r,m,k,p,h;

int main()
{
    while(cin>>n>>h){
        int c=1,k=1;
        while(k<n){
            double x=((double)h)/(sqrt((double)n/c));
            printf("%.12f ",x);
            ++c;
            ++k;
        }
        cout<<endl;
    }
    return 0;
}

