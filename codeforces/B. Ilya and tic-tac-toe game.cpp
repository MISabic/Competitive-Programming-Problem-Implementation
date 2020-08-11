#include<bits/stdc++.h>
using namespace std;

int fx[]={+1,-1,0,0};
int fy[]={0,0,+1,-1};
bool isValid(int x, int y)
{
    return (x<4 && x>=0 && y<4 && y>=0);
}

int main()
{
    char arr[10][10];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }
    int f=0;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(arr[i][j]=='x'){//cout<<i<<"  "<<j<<"  "<<arr[i][j+1]<<"  "<<arr[i][j+2]<<endl;
                if(isValid(i,j+1) && isValid(i,j+2) && ((arr[i][j+1]=='x' && arr[i][j+2]=='.') || (arr[i][j+1]=='.' && arr[i][j+2]=='x'))) f=1;//cout<<"ji"<<endl;
                if(isValid(i,j-1) && isValid(i,j-2) && ((arr[i][j-1]=='x' && arr[i][j-2]=='.') || (arr[i][j-1]=='.' && arr[i][j-2]=='x'))) f=1;
                if(isValid(i+1,j) && isValid(i+2,j) && ((arr[i+1][j]=='x' && arr[i+2][j]=='.') || (arr[i+1][j]=='.' && arr[i+2][j]=='x'))) f=1;
                if(isValid(i-1,j) && isValid(i-2,j) && ((arr[i-1][j]=='x' && arr[i-2][j]=='.') || (arr[i-1][j]=='.' && arr[i-2][j]=='x'))) f=1;
                if(isValid(i-1,j-1) && isValid(i+1,j+1) && ((arr[i-1][j-1]=='x' && arr[i+1][j+1]=='.') || (arr[i-1][j-1]=='.' && arr[i+1][j+1]=='x'))) f=1;
                if(isValid(i+1,j-1) && isValid(i-1,j+1) && ((arr[i+1][j-1]=='x' && arr[i-1][j+1]=='.') || (arr[i+1][j-1]=='.' && arr[i-1][j+1]=='x'))) f=1;
            }
            if(arr[i][j]=='.'){
                if(isValid(i,j+1) && isValid(i,j+2) && arr[i][j+1]=='x' && arr[i][j+2]=='x') f=1;
                if(isValid(i,j-1) && isValid(i,j-2) && arr[i][j-1]=='x' && arr[i][j-2]=='x') f=1;
                if(isValid(i+1,j) && isValid(i+2,j) && arr[i+1][j]=='x' && arr[i+2][j]=='x') f=1;
                if(isValid(i-1,j) && isValid(i-2,j) && arr[i-1][j]=='x' && arr[i-2][j]=='x') f=1;
                if(isValid(i-1,j-1) && isValid(i+1,j+1) && arr[i-1][j-1]=='x' && arr[i+1][j+1]=='x') f=1;
                if(isValid(i+1,j-1) && isValid(i-1,j+1) && arr[i+1][j-1]=='x' && arr[i-1][j+1]=='x') f=1;
            }
        }
    }
    if(f==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
