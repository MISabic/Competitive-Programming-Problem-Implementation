#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
using namespace std;

int main()
{
    ll n,m,k,r,c1,c2,arr[30];
    pair< ll,pair<ll,ll> >pi[1010];
    while(cin>>n>>m>>k){

        ll res=n*m;
        for(int i=0; i<k; i++){
            cin>>r>>c1>>c2;
            pi[i]=mp(r,mp(c1,c2));
        }
        sort(pi,pi+k);
        pair< ll,pair<ll,ll> >qi[1010];

        int f=0,c=0;
        for(int i=0; i<k; i++){

            ll a=pi[i].si.fi;
            ll b=pi[i].si.si;

            if(a!=-1 && b!=-1){

                for(int j=i+1; j<k && pi[j].fi==pi[i].fi; j++){

                    a=pi[i].si.fi;
                    b=pi[i].si.si;
                    ll c=pi[j].si.fi;
                    ll d=pi[j].si.si;

                    if((c>=a && c<=(b+1)) && d>=(b+1)){
                        pi[i].si.si=d;
                        pi[j].si.fi=-1;
                        pi[j].si.si=-1;
                    }
                    else if((d>=(a-1) && d<=b) && c<=(a-1)){
                        pi[i].si.fi=c;
                        pi[j].si.fi=-1;
                        pi[j].si.si=-1;
                    }
                    else if((d>=a && d<=b) && (c>=a && c<=b)){
                        pi[j].si.fi=-1;
                        pi[j].si.si=-1;
                    }
                    else if((c<a && d>b)){
                        pi[i].si.fi=c;
                        pi[i].si.si=d;
                        pi[j].si.fi=-1;
                        pi[j].si.si=-1;
                    }

                }
            }
        }

//just to ensure that there isn't any gap

        for(int i=0; i<k; i++){

            ll a=pi[i].si.fi;
            ll b=pi[i].si.si;

            if(a!=-1 && b!=-1){

                for(int j=i+1; j<k && pi[j].fi==pi[i].fi; j++){

                    a=pi[i].si.fi;
                    b=pi[i].si.si;
                    ll c=pi[j].si.fi;
                    ll d=pi[j].si.si;

                    if((c>=a && c<=(b+1)) && d>=(b+1)){
                        pi[i].si.si=d;
                        pi[j].si.fi=-1;
                        pi[j].si.si=-1;
                    }
                    else if((d>=(a-1) && d<=b) && c<=(a-1)){
                        pi[i].si.fi=c;
                        pi[j].si.fi=-1;
                        pi[j].si.si=-1;
                    }
                    else if((d>=a && d<=b) && (c>=a && c<=b)){
                        pi[j].si.fi=-1;
                        pi[j].si.si=-1;
                    }
                    else if((c<a && d>b)){
                        pi[i].si.fi=c;
                        pi[i].si.si=d;
                        pi[j].si.fi=-1;
                        pi[j].si.si=-1;
                    }

                }
            }
        }

        for(int i=0; i<k; i++){
            if(pi[i].si.si!=-1)
                res-=(pi[i].si.si-pi[i].si.fi+1);
        }
        cout<<res<<endl;
    }
    return 0;
}




