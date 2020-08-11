#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,len,c=0,trr[27];
    char arr[35];
    while(scanf("%d",&t)==1){
        int count=0;
        while(t--){
            memset(trr,0,sizeof(trr));
            cin>>arr;
            len=strlen(arr);
            for(int i=0; i<len; i++)
                trr[arr[i]-96]++;
            sort(trr+1,trr+27,greater<int>());
            int x=0;
            for(int i=2; i<27; i++){
                if(trr[i]==0) break;
                if(trr[i]==trr[i-1])
                    x=1;
            }
            if(x==0 && trr[2]!=0)
                ++count;
        }
        printf("Case %d: %d\n",++c,count);
    }
    return 0;
}
