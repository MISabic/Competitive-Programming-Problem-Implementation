#include<bits/stdc++.h>
using namespace std;

typedef struct{
    int a,b;
}team;

int main()
{
    team game[30];
    int n;
    while(scanf("%d",&n)==1){
        for(int i=0; i<n; i++)
            scanf("%d %d",&game[i].a,&game[i].b);
        int c=0;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(j!=i && game[i].b==game[j].a && game[i].a==game[j].b){
                    c+=2;
                }
                else if(j!=i && game[i].b==game[j].a || game[i].a==game[j].b){
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}

