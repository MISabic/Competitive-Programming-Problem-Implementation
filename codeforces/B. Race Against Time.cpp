#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,m,s,t1,t2;
    while(cin>>h>>m>>s>>t1>>t2){
        h=((h*5.0));
        h%=60;
        t1=(t1*5);
        t1%=60;
        t2=(t2*5);
        t2%=60;
        //cout<<h<<"   "<<m<<"   "<<s<<"   "<<t1<<"   "<<t2<<endl;
        int chidori=0,temp=t1;
        while(1){   //cout<<"kk :: "<<t1<<endl;
            if(t1%60==t2){
                chidori=1;
                break;
            }
            if(t1%60==h || t1%60==m || t1%60==s){
                break;
            }
            ++t1;
        }
        t1=temp;
        while(1){   //cout<<"hh :: "<<t1<<endl;
            if(t1==t2%60){
                chidori=1;
                break;
            }
            if(t2%60==h || t2%60==m || t2%60==s){
                break;
            }
            ++t2;
        }
        if(chidori==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
