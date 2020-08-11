#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,n,m,k,p;
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>n>>m>>k;
        int flag=0,arr[n+5][k+5];
        for(int j=0; j<n; j++){
            for(int l=0; l<k; l++){
                cin>>arr[j][l];
            }
        }
        int v[p+5],happy[n+5],mark[m+5];
        memset(happy,0,sizeof(happy));
        memset(mark,0,sizeof(mark));
        cin>>p;
        for(int j=0; j<p; j++){
            cin>>v[j];
            mark[v[j]]=1;
        }

        for(int j=0; j<n; j++){
            if(!happy[j]){
                for(int l=0; l<k; l++){
                    if(((arr[j][l]<0 && !mark[abs(arr[j][l])]) || (arr[j][l]>0 && mark[arr[j][l]]))){
                        happy[j]=1;
                        break;
                    }
                }
            }
        }

        for(int j=0; j<n; j++){
            if(!happy[j]){
                flag=1;
                break;
            }
        }

        if(!flag) cout<<"Case "<<i<<": Yes"<<endl;
        else cout<<"Case "<<i<<": No"<<endl;
    }
}



/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("out.txt","w",stdout);
    int c,n,m,k,p;
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>n>>m>>k;
        int flag=0,arr[n+5][k+5];
        for(int j=0; j<n; j++){
            for(int l=0; l<k; l++){
                cin>>arr[j][l];
            }
        }
        cin>>p;
        int v[p+5],happy[n+5],mark[m+5];
        memset(happy,0,sizeof(happy));
        memset(mark,0,sizeof(mark));
        for(int j=0; j<p; j++){
            cin>>v[j];
            mark[v[j]]=1;
        }

        for(int l=0; l<n; l++){
            if(!happy[l]){
                for(int m=0; m<k; m++){
                    if(arr[l][m]<0 && !mark[abs(arr[l][m])]){
                        happy[l]=1;
                        break;
                    }
                }
            }
        }

        for(int j=0; j<p; j++){
            for(int l=0; l<n; l++){
                if(!happy[l] && v[j]>=0){
                    for(int m=0; m<k; m++){
                        if(arr[l][m]==v[j]){
                            happy[l]=1;
                            break;
                        }
                    }
                }
            }
        }

        for(int j=0; j<n; j++){
            if(!happy[j]){
                flag=1;
                break;
            }
        }

        if(!flag) cout<<"Case "<<i<<": Yes"<<endl;
        else cout<<"Case "<<i<<": No"<<endl;
    }
}
*/
