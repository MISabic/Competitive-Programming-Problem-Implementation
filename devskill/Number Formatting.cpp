#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define len str.length()
using namespace std;

int main()
{
    ll n,t,p,q,c=0,r,k,s,arr[100000];
    double a,b;
    map<int,string>mp;
    string str;
    mp[1]="Citycell";
    mp[5]="Teletalk";
    mp[6]="Airtel";
    mp[7]="Grameenphone";
    mp[8]="Robi";
    mp[9]="Banglalink";
    cin>>t;
    while(t--){
        cin>>str;
        if(str[0]!='8')
            printf("88%s %s\n",str.c_str(),mp[str[2]-'0'].c_str());
        else
            printf("%s %s\n",str.c_str(),mp[str[4]-'0'].c_str());
    }
    return 0;
}

