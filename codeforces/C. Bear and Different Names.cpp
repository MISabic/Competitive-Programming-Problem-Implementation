#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n,k;
    string temp,str[100];
    vector<string> res;

    for(int i=65; i<=90; i++){
        temp+=(char)i;
        for(int j=97; j<=122; j++){
            temp+=(char)j;
            res.push_back(temp);
            temp.clear();
            temp+=(char)i;
        }
        temp.clear();
    }

    while(cin>>n>>k){
        string fin[500],temp=res[k-1];
        vector<string>ans,keep;
        map<string,int>mp;
        for(int i=0; i<k-1; i++){
            ans.push_back(res[i]);
            keep.push_back(res[i]);
            mp[res[i]]=1;
        }
        keep.push_back(res[k-1]);
        for(int i=0; i<n-k+1; i++){
            cin>>str[i];
            if(str[i]=="YES"){
                for(int j=0; j<keep.size(); j++){
                    if(mp[keep[j]]!=1){     // neya hoyeche -- 1, neya hoy nai -- 0
                        mp[ans[ans.size()-k+1]]=0;
                        ans.push_back(keep[j]);
                        mp[keep[j]]=1;
                        break;
                    }
                }
            }
            else ans.push_back(ans[ans.size()-k+1]);
        }
        for(int i=0; i<ans.size(); i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}

