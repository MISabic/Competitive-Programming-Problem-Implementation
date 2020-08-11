#include<bits/stdc++.h>
using namespace std;

bool comp(tuple<int,int,int> a,tuple<int,int,int> b)
{
    return (get<1>(a) < get<1>(b));
}

int main()
{
    int t,n,s,e;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d",&n);
        vector<tuple<int,int,int>>vec;
        for(int j=0; j<n; j++){
            scanf("%d %d",&s,&e);
            vec.push_back({s,e,j});
        }
        if(n==2){
            cout<<"Case #"<<i<<": CJ"<<endl;
            continue;
        }
        sort(vec.begin(),vec.end(),comp);
        /*for(auto x:vec){
            cout<< get<0>(x) <<" "<< get<1>(x) <<endl;
        }*/
        string res;
        for(int i=0; i<n; i++) res+='J';
        bool ok;
        int tot=0;
        for(auto x:vec){
            ok=true;
            for(auto y:vec){
                if(x!=y){
                    /*cout<<get<0>(x) <<" "<<get<1>(x)<<" "<<get<0>(y)<<" "<<get<1>(y)<<endl;
                    cout<<((get<0>(y) <= get<0>(x)) && (get<0>(x) < get<1>(y)))<<endl;
                    cout<<((get<0>(y) < get<1>(x)) && (get<1>(x) <= get<1>(y)))<<endl;
                    cout<<((get<0>(y) <= get<0>(x)) && (get<1>(x) <= get<1>(y)))<<endl;
                    cout<<((get<0>(x) <= get<0>(y)) && (get<1>(y) <= get<1>(x)))<<endl;*/
                    ok &= (((get<0>(y) <= get<0>(x)) && (get<0>(x) < get<1>(y))) || ((get<0>(y) < get<1>(x)) && (get<1>(x) <= get<1>(y))) || ((get<0>(y) <= get<0>(x)) && (get<1>(x) <= get<1>(y))) || ((get<0>(x) <= get<0>(y)) && (get<1>(y) <= get<1>(x))));
                }
            }
            //cout<<"ok :: "<<ok<<endl;
            tot+=ok;
        }
        if(tot>1){
            printf("Case #%d: IMPOSSIBLE\n",i);
            continue;
        }

        tuple<int,int,int>temp=vec[0];
        for(int j=1; j<vec.size(); j++){
            if(get<1>(temp)<=get<0>(vec[j])){
                res[get<2>(temp)]='C';
                temp=vec[j];
            }
        }
        res[get<2>(temp)]='C';
        cout<<"Case #"<<i<<": "<<res<<endl;

    }
    return 0;
}

