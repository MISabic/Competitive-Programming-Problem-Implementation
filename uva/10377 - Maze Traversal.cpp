#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,ri,ci;
    string str[100],test;
    cin>>t;
    while(t--){
        char dir='N';
        int flag=0;
        cin>>n>>m;
        getc(stdin);
        for(int i=0; i<n; i++){
            getline(cin,str[i]);
        }

        cin>>ri>>ci;
        --ri,--ci;
        getc(stdin);
        while(getline(cin,test)){
            for(int i=0; i<test.length(); i++){
                    //cout<<ri+1<<" "<<ci+1<<" kk "<<dir<<endl;
                if(test[i]=='Q'){
                    cout<<ri+1<<" "<<ci+1<<" "<<dir<<endl;
                    flag=1;
                    break;
                }
                else if(test[i]=='R'){
                    if(dir=='N') dir='E';
                    else if(dir=='E') dir='S';
                    else if(dir=='S') dir='W';
                    else if(dir=='W') dir='N';
                }
                else if(test[i]=='L'){
                    if(dir=='N') dir='W';
                    else if(dir=='W') dir='S';
                    else if(dir=='S') dir='E';
                    else if(dir=='E') dir='N';
                }
                else if(test[i]=='F'){
                    if(dir=='N' && ri-1>=0 && str[ri-1][ci]!='*') --ri;
                    else if(dir=='W' && ci-1>=0 && str[ri][ci-1]!='*') --ci;
                    else if(dir=='S' && ri+1<n && str[ri+1][ci]!='*') ++ri;
                    else if(dir=='E' && ci+1<m && str[ri][ci+1]!='*') ++ci;
                }
            }
            if(flag==1) break;
        }
        if(t!=0) cout<<endl;
    }
    return 0;
}
