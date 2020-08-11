#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int x;
    while(cin>>x>>str){
        vector<int>vec;
        map<string,int>mp1;
        map<string,int>mp2;
        int f=0,j;
        for(int i=0; i<str.length(); i++){
            if(str[i]=='(') f=1;
            else if(str[i]==')') f=0;
            else if(isalpha(str[i])){
                string n="";
                for(j=i; j<str.length(); j++){
                    if(isalpha(str[j])){
                        n+=str[j];
                    }
                    else{
                        i=j-1;
                        //cout<<f<<"   "<<n<<endl;
                        if(f==0) mp1[n]++;
                        if(f==1) mp2[n]++;
                        break;
                    }
                }
                if(n.length()>0 && j==str.length()){
                    if(f==0) mp1[n]++;
                    if(f==1) mp2[n]++;
                }
            }
        }
        map<string,int>::iterator it1=mp1.begin();
        map<string,int>::iterator it2=mp2.begin();
        int len=0;
        for(it1; it1!=mp1.end(); it1++){
            //cout<<it1->first<<endl;
            if((it1->first).length()>len)
                len=(it1->first).length();
        }
        int c=0;
        for(it2; it2!=mp2.end(); it2++)
            c+=it2->second;
        cout<<len<<" "<<c<<endl;
    }
    return 0;
}
