#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,q,v,ind;
    char ch;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d %d",&n,&q);

        vector<int>vec;
        int v;
        for(int j=1; j<=n; j++){
            scanf("%d",&v);
            vec.push_back(v);
        }

        printf("Case %d:\n",i);
        for(int j=0; j<q; j++){
            scanf(" %c %d",&ch,&v);

            if(ch=='a'){
                vec.push_back(v);
            }
            else{
                if(vec.size()<v) printf("none\n");
                else{
                    printf("%d\n",vec[v-1]);
                    vec.erase(vec.begin()+v-1);
                }
            }
        }
    }
    return 0;
}
