#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>mp;
    int n;
    string str;
    scanf("%d",&n);
    getc(stdin);
    getline(cin,str);
    while(n--){
        double c=0;
        while(getline(cin,str)){
            if(str=="") break;
            ++c;
            mp[str]++;
        }
        map<string,int>::iterator it=mp.begin();
        for(it; it!=mp.end(); it++)
            printf("%s %.4f\n",it->first.c_str(),(100/c)*it->second);
        if(n!=0) cout<<endl;
        mp.clear();
    }
    return 0;
}
