#include<bits/stdc++.h>
using namespace std;

int taken[1000100];

int main()
{
    int t,x,y,c=0;
    vector< pair<int,int> >vec;
    for(int i=0; i<1000010; i++){
        if(taken[i]==0 && i+c<1000010){
            vec.push_back(make_pair(i,i+c));
            taken[i]=1,taken[i+c]=1;
            ++c;
        }
    }
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&x,&y);
        int f=0;
        for(int i=0; i<vec.size(); i++){
            if((vec[i].first==x && vec[i].second==y) || (vec[i].first==y && vec[i].second==x)){
                f=1;
                break;
            }
        }
        if(f==1) printf("Bob\n");
        else printf("Alice\n");
    }
    return 0;
}

