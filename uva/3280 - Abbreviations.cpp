#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,x=0;
    vector<string>s1;
    vector<string>s2;
    string ss;
    while(scanf("%d",&n)==1 && n!=0){
        for(int i=0; i<n; i++){
            cin>>ss;
            int len=ss.length();
            s1.push_back(ss);
        }
        int k=0;
        for(i=0; i<n; i++){
            string test=s1[i];
            while(1){
                char ch=test[k];
                int flag=0;
                for(j=0; j<n; j++){
                    if(s1[j].length()<=k || j==i)
                        continue;
                    if(ch==s1[j][k]){
                        flag=1;
                    }
                }
                if(flag==1){
                    ++k;
                }
                if(flag==0 || k+1==test.length()){
                    string ss = test.substr(0,k+1);
                    k=0;
                    s2.push_back(ss);
                    break;
                }
            }
        }
        printf("%d\n",++x);
        for(i=0; i<s2.size(); i++){
            cout<<s1[i]<<" "<<s2[i]<<endl;
        }
        s1.clear();
        s2.clear();
    }
    return 0;
}
