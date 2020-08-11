#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>vec[10000];
    int n,e,x,y;
    scanf("%d %d",&n,&e);
    for(int i=0; i<e; i++){
        scanf("%d %d",&x,&y);
        vec[x].push_back(y);
    }
    for(int i=1; i<n; i++){
        printf("\n%d ->",i);
        for(int j=0; j<vec[i].size(); j++){
             printf(" %d",vec[i][j]);
        }
    }
    return 0;
}
