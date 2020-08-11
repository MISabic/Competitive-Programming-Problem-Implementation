#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,k1=0,k2=0,k3=0;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        k1+=a,k2+=b,k3+=c;
        /*cout<<endl;
        cout<<k1<<"   "<<k2<<"    "<<k3<<endl;
        cout<<endl;*/
        if(k1<30 || k2<30 || k3<30){
            cout<<"NO"<<endl;
        }
        else{
            int keep=min(k1,min(k2,k3));
            cout<<keep<<endl;
            k1-=keep,k2-=keep,k3-=keep;
        }

    }
    return 0;
}
