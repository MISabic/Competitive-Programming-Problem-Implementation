#include<bits/stdc++.h>
using namespace std;

int fx[]={-1,+1,0,0,+1,-1,+1,-1};
int fy[]={0,0,-1,+1,-1,-1,+1,+1};

int main()
{
    int t,n;
    char arr[5][1000];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);

        for(int i=0; i<3; i++){
            scanf("%s",&arr[i]);
        }
        int k=-1;
        for(int i=0; i<3; i++){
            for(int j=0; j<3*n; j++){
                int sum=0;
                if(arr[i][j]=='X'){
                    //cout<<"\nbegin\n"<<endl;
                    for(int l=0; l<8; l++){ //cout<<"this :: "<<arr[i+fx[l]][j+fy[l]]<<endl;
                        if(arr[i+fx[l]][j+fy[l]]=='*'){
                            sum+=4;
                        }
                    }
                }
                if(sum>k) k=sum;
            }
        }
        printf("%d\n",k);
    }
    return 0;
}
