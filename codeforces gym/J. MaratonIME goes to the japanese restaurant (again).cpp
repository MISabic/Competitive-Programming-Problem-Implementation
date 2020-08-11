#include<bits/stdc++.h>
using namespace std;

typedef struct{
    int x,y,r;
}circle;

int main()
{
    long long n,q,a,b;
    circle arr[1010];
    while(cin>>n){
        for(int i=0; i<n; i++){
            cin>>arr[i].x>>arr[i].y>>arr[i].r;
            arr[i].x=abs(arr[i].x);
            arr[i].y=abs(arr[i].y);
        }
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(((arr[i].x+arr[i].r)<=arr[j].x && (arr[i].x+arr[i].r)>=(arr[j].x-arr[j].r)) || ((arr[i].x-arr[i].r)>=arr[j].x && (arr[i].x-arr[i].r)<=(arr[j].x+arr[j].r))){
                    cout<<i+1<<" "<<j+1<<endl;
                }
                else if(((arr[i].y+arr[i].r)<=arr[j].y && (arr[i].y+arr[i].r)>=(arr[j].y-arr[j].r)) || ((arr[i].y-arr[i].r)>=arr[j].y && (arr[i].y-arr[i].r)<=(arr[j].y+arr[j].r))){
                    cout<<i+1<<" "<<j+1<<endl;
                }
                /*else if(((arr[i].x)>=(arr[j].x-arr[j].r) && (arr[i].x)<=(arr[j].x+arr[j].r)) || ((arr[i].x)>=(arr[j].x-arr[j].r) && (arr[i].x)<=(arr[j].x+arr[j].r))){
                    cout<<i+1<<" "<<j+1<<endl;
                }
                else if(((arr[i].x+arr[i].r)>=(arr[j].x-arr[j].r) && (arr[i].x+arr[i].r)<=(arr[j].x+arr[j].r)) || ((arr[i].x+arr[i].r)>=(arr[j].x-arr[j].r) && (arr[i].x+arr[i].r)<=(arr[j].x+arr[j].r))){
                    cout<<i+1<<" "<<j+1<<endl;
                }
                else if(((arr[i].x-arr[i].r)>=(arr[j].x-arr[j].r) && (arr[i].x-arr[i].r)<=(arr[j].x+arr[j].r)) || ((arr[i].x-arr[i].r)>=(arr[j].x-arr[j].r) && (arr[i].x-arr[i].r)<=(arr[j].x+arr[j].r))){
                    cout<<i+1<<" "<<j+1<<endl;
                }
                else if(((arr[i].y)>=(arr[j].y-arr[j].r) && (arr[i].y)<=(arr[j].y+arr[j].r)) || ((arr[i].y)>=(arr[j].y-arr[j].r) && (arr[i].y)<=(arr[j].y+arr[j].r))){
                    cout<<i+1<<" "<<j+1<<endl;
                }
                else if(((arr[i].y+arr[i].r)>=(arr[j].y-arr[j].r) && (arr[i].y+arr[i].r)<=(arr[j].y+arr[j].r)) || ((arr[i].y+arr[i].r)>=(arr[j].y-arr[j].r) && (arr[i].y+arr[i].r)<=(arr[j].y+arr[j].r))){
                    cout<<i+1<<" "<<j+1<<endl;
                }
                else if(((arr[i].y-arr[i].r)>=(arr[j].y-arr[j].r) && (arr[i].y-arr[i].r)<=(arr[j].y+arr[j].r)) || ((arr[i].y-arr[i].r)>=(arr[j].y-arr[j].r) && (arr[i].y-arr[i].r)<=(arr[j].y+arr[j].r))){
                    cout<<i+1<<" "<<j+1<<endl;
                }*/
            }
        }
    }
    return 0;
}
