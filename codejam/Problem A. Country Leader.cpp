#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("A-small-practice.in","r",stdin);
    //freopen("out.out","w",stdout);
    int t,n,c=0;
    string str;
    map<string,int>mp;
    int arr[30];
    cin>>t;
    while(t--){
        cin>>n;
        getc(stdin);
        for(int i=0; i<n; i++){
            getline(cin,str);
            int len=str.length(),num=0;
            memset(arr,0,sizeof(arr));
            for(int j=0; j<len; j++){
                arr[(int)(str[j])-65]=1;
            }
            for(int j=0; j<27; j++){    //cout<<j<<endl;
                num+=arr[j];
            }
            mp[str]=num;
        }
        int mx=0;
        map<string,int>::iterator it=mp.begin();
        for(it; it!=mp.end(); it++){
            if(it->second>mx){
                str=it->first;
                mx=it->second;
            }
        }
        printf("Case #%d: %s\n",++c,str.c_str());
        mp.clear();
    }
    return 0;
}
