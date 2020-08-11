#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5];
    map<int,int>mp;
    while(scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3])==4){
        mp[a[0]]++,mp[a[1]]++,mp[a[2]]++,mp[a[3]]++;
        sort(a,a+4);
        int f=0;
        for(int i=0; i<4; i++){
            for(int j=i+1; j<4; j++){
                for(int k=0; k<4; k++){
                    if(k!=i && k!=j && a[i]+a[j]>a[k] && a[i]+a[k]>a[j] && a[k]+a[j]>a[i]){
                        cout<<"TRIANGLE"<<endl;
                        f=1;
                        break;
                    }
                }
                if(f==1) break;
            }
            if(f==1) break;
        }
        if(f==1){
            mp.clear();
            continue;
        }
        for(int i=0; i<4; i++){
            for(int j=i+1; j<4; j++){
                if(mp[a[i]+a[j]]){
                    cout<<"SEGMENT"<<endl;
                    f=1;
                    break;
                }
            }
            if(f==1) break;
        }
        mp.clear();
        if(f==1) continue;
        else cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}
