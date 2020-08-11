#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
#define read freopen("A-large.in","r",stdin)
#define write freopen("out.out","w",stdout)
using namespace std;

int arr[1111];

void divisors()
{
    memset(arr,0,sizeof(arr));
    for(int i=1; i<1010; i++){
        for(int j=1; j<1010; j++){
            if(i%j==0){
                arr[i]++;
            }
        }
    }
}

int main()
{
    //read;
    //write;
    divisors();
    int n,l,r,c=0;
    while(cin>>l>>r){
        int c=0;
        for(int i=l; i<=r; i++){
            if(arr[i]%2!=0){
                ++c;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}

