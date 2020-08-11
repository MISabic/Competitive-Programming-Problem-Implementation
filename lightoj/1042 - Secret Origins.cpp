#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c, n, j;
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>n;
        string res;
        int zeros=0, ones=0;
        while(n){
            res+=((n%2)+'0');
            (n%2)?(++ones):(++zeros);
            n/=2;
        }
        reverse(res.begin(), res.end());
        if(ones==1){
            res+="0";
        }
        else if(ones==res.length()){
            res="10"+res.substr(1,res.length());
        }
        else{
            res="0"+res;
            //cout<<res<<endl;
            int flag=0;
            zeros=0, ones=0;
            for(j=res.length()-1; j>=0; j--){
                if(res[j]=='0') ++zeros;
                else if(res[j]=='1') ++ones;

                if(res[j]=='1' && flag!=1){
                    flag=1;
                }
                else if(res[j]=='0' && flag){   //cout<<"hi"<<endl;
                    break;
                }
            }
            res[j]='1';
            --ones;
            for(++j; j<res.length(); j++){
                if(j>=(res.length()-ones)) res[j]='1';
                else res[j]='0';
            }
        }
        //cout<<res<<endl;
        long long number=0;
        for(j=0; j<res.length(); j++){
            number+=((res[j]-'0')*(1<<(res.length()-j-1)));
        }

        cout<<"Case "<<i<<": "<<number<<endl;
    }
    return 0;
}
