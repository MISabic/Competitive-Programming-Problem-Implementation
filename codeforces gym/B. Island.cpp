#include<bits/stdc++.h>
using namespace std;

int fx[]={0,0,-1,1};
int fy[]={-1,1,0,0};

bool isValid(int n,int k)
{
    if(n>=0 && n<k) return true;
    return false;
}

int main()
{
    freopen("INPUT.TXT","r",stdin);
    freopen("OUTPUT.TXT","w",stdout);
    int n,m;
    char arr[1110][1110];
    while(cin>>n>>m){
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
            }
        }
        int c=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr[i][j]=='+'){
                    for(int k=0; k<4; k++){
                        if(isValid(i+fx[k],n) && isValid(j+fy[k],m) && arr[i+fx[k]][j+fy[k]]=='-'){
                            ++c;
                            break;
                        }
                    }
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
