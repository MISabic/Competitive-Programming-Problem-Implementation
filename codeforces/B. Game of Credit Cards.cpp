#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n,p,q,r,k,arr[100100];
    string s,m;
    double x,y;
    while(cin>>n>>s>>m){
        sort(s.begin(),s.end());
        sort(m.begin(),m.end());
        int con=0,gon=0;
        string one=m,two=s;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(two[j]!='c' && one[i]>two[j]){
                    ++con;
                    two[j]='c';
                    break;
                }
            }
        }

        one=m,two=s;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(two[j]!='c' && one[i]>=two[j]){
                    ++gon;
                    two[j]='c';
                    break;
                }
            }
        }

        int res=n-gon;
        cout<<res<<endl<<con<<endl;
    }
    return 0;
}

