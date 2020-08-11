#include<bits/stdc++.h>
#define ll long long
#define mp meke_pair
#define pb push_back
#define fi first
#define si second
#define len str.length()
#define bug cout<<"  helllo  "<<endl

using namespace std;

int main()
{
    ll t,n,a,b,p,q,r,s,k,arr[100100];
    double x1,y1,x2,y2;
    string str;
    while(cin>>n>>k>>a>>b){
        string fin;
        int flag=0,c=0;
        if(a==0 && b==0){
            cout<<"NO"<<endl;
            continue;
        }
        /*if(a==0){
            if(n==k){
                for(int i=0; i<n; i++){
                    cout<<"B";
                }
                cout<<endl;
            }
            else{
                cout<<"NO"<<endl;
                continue;
            }
        }
        if(b==0){
            if(n==k){
                for(int i=0; i<n; i++){
                    cout<<"G";
                }
                cout<<endl;
            }
            else{
                cout<<"NO"<<endl;
                continue;
            }
        }*/
        if((a==0 || b==0) && k<n){
            cout<<"NO"<<endl;
            continue;
        }
        while(1){
            /*if(a==0 || b==0){
                flag=1;
                break;
            }*/
            if(fin.length()==n)
                break;
            if(a==0 && b==0)
                break;
            ll mx=(min(a,b)+1)*k;
            if(mx<max(a,b)){
                flag=1;
                break;
            }
            if(a==b){
                if(fin[fin.length()-1]=='B'){
                    for(int i=0; i<(a+b)/2; i++){
                        //cout<<"GB";
                        fin+="GB";
                    }
                    a=0;
                    b=0;
                    break;
                }
                else{
                    for(int i=0; i<(a+b)/2; i++){
                        //cout<<"BG";
                        fin+="BG";
                    }
                    a=0;
                    b=0;
                    break;
                }
            }
            else if(a>b){//bug;
                if(abs(a-b)<=k){
                    for(int i=0; i<a-b; i++){
                        //cout<<"G";
                        fin+="G";
                    }
                    a=b;
                }
                else{
                    for(int i=0; i<k; i++){
                        //cout<<"G";
                        fin+="G";
                    }
                    //cout<<"B";
                    fin+="B";
                    a-=k;
                    --b;
                }
            }
            else if(b>a){
                if(abs(a-b)<=k){
                    for(int i=0; i<b-a; i++){
                        //cout<<"B";
                        fin+="B";
                    }
                    b=a;
                }
                else{
                    for(int i=0; i<k; i++){
                        //cout<<"B";
                        fin+="B";
                    }
                    //cout<<"G";
                    fin+="G";
                    b-=k;
                    --a;
                }
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<fin<<endl;
    }
    return 0;
}

