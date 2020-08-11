#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
#define read freopen("A-large.in","r",stdin)
#define write freopen("out.out","w",stdout)
using namespace std;

int main()
{
    //read;
    //write;
    int x1,y1,x2,y2,t,n,l,r,c=0,val[1000];
    cin>>t;
    while(t--){
        cin>>x1>>y1>>x2>>y2;
        int p=x1,q=y1,f=0;
        while(1){
            if(p>8 || q>8 || p<1 || q<1) break;
            if(p==x2 && q==y2){
                f=1;
                cout<<"Yes"<<endl;
                break;
            }
            ++p,++q;
        }
        p=x1,q=y1;
        while(1){
            if(p>8 || q>8 || p<1 || q<1) break;
            if(p==x2 && q==y2){
                f=1;
                cout<<"Yes"<<endl;
                break;
            }
            --p,--q;
        }
        p=x1,q=y1;
        while(1){
            if(p>8 || q>8 || p<1 || q<1) break;
            if(p==x2 && q==y2){
                f=1;
                cout<<"Yes"<<endl;
                break;
            }
            ++p,--q;
        }
        p=x1,q=y1;
        while(1){
            if(p>8 || q>8 || p<1 || q<1) break;
            if(p==x2 && q==y2){
                f=1;
                cout<<"Yes"<<endl;
                break;
            }
            --p,++q;
        }
        if(f==0) cout<<"No"<<endl;
    }
    return 0;
}


