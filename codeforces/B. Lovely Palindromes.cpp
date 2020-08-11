#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    char arr[105];
    while(scanf("%d %d",&n,&d)==2){
        int p=-1,k=0;
        for(int i=0; i<d; i++){
            int flag=0;
            scanf("%s",arr);
            int len=strlen(arr);
            for(int j=0; j<len; j++){
                if(arr[j]=='0'){
                    ++k;
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                if(k>p) p=k;
                k=0;
            }
//            cout<<p<<endl;
        }
        if(k>p) p=k;
        //if(p==-1) cout<<k<<endl;
        //else
            cout<<p<<endl;
    }
    return 0;
}
