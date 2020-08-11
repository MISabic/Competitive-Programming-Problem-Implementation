#include<bits/stdc++.h>
using namespace std;

int arr[10005];
vector<int>vec;
void seive()
{
    int n=sqrt(10001);
    for(int i=3; i<=n; i+=2){
        if(arr[i]==0)
        for(int j=i*i; j<10001; j+=i+i){
            arr[j]=1;
        }
    }
    vec.push_back(2);
    for(int i=3; i<10002; i+=2){
        if(arr[i]==0)
            vec.push_back(i);
    }
}

int main()
{
    map<int,char>mp;
    for(int i=1; i<27; i++)
        mp[i]=(char)(i+96);
    seive();
    int n,r,a,k,c=0;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>k;
        for(int i=0; i<k; i++){
            cin>>a;
            if(a==1){
                continue;
            }
            if(a==0){
                str+=" ";
                continue;
            }
            if(a==-1){
                str+=".";
                continue;
            }
            int p;
            for(p=0; p<vec.size(); p++){
                if(vec[p]>a)
                    break;
            }
            char h=mp[((p%26)+1)];
            str+=h;
        }
        cout<<str<<endl;
    }
    return 0;
}

