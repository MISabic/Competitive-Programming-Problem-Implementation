#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll t,n,a,b,p,q,r,s,k,arr[100100];
    double x1,y1,x2,y2;
    string str;
    while(cin>>n>>str){
        map<char,int>mp;
        for(int i=0; i<n; i++){
            mp[str[i]]++;
        }
        int len=max(mp['A'],max(mp['G'],max(mp['C'],mp['T'])))*4;
        int val=min(mp['A'],min(mp['G'],min(mp['C'],mp['T'])));
        mp['A']-=val;
        mp['G']-=val;
        mp['C']-=val;
        mp['T']-=val;
        int k=max(mp['A'],max(mp['G'],max(mp['C'],mp['T'])));
        queue<char>q;
        for(int i=0; i<k-mp['A']; i++){
            q.push('A');
        }
        for(int i=0; i<k-mp['G']; i++){
            q.push('G');
        }
        for(int i=0; i<k-mp['C']; i++){
            q.push('C');
        }
        for(int i=0; i<k-mp['T']; i++){
            q.push('T');
        }
        int mx=(k-mp['A'])+(k-mp['G'])+(k-mp['C'])+(k-mp['T']);
        if(mx>mp['?']){
            cout<<"===";
        }
        else{
            int check=mp['?']-mx;
            if(check%4==0){
                for(int i=0; i<check/4; i++){
                    q.push('A');
                    q.push('G');
                    q.push('C');
                    q.push('T');
                }
                for(int i=0; i<n; i++){
                    if(str[i]=='?'){
                        cout<<q.front();
                        q.pop();
                    }
                    else
                        cout<<str[i];
                }
            }
            else{
                cout<<"===";
            }
        }
        cout<<endl;
    }
    return 0;
}

