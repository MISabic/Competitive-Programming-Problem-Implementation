#include<bits/stdc++.h>
#define ll long long
#define read freopen("in.txt","r",stdin)
using namespace std;

int main()
{
    //read;
    int n,q,p;
    scanf("%d",&n);
    while(n--){
        string str,fin="";
        cin>>str;
        int len=str.length();
        for(int i=0; i<len; i++){
            if(isalpha(str[i])){
                fin+=str[i];
            }
            else if(isdigit(str[i])){
                int k=(str[i]-'0');
                string keep=fin;
                for(int i=1; i<k; i++){//cout<<fin<<endl;
                    fin+=keep;
                }
            }
        }
        cin>>q;
        while(q--){
            cin>>p;
            if(p>fin.length())
                cout<<-1<<endl;
            else
                cout<<fin[p-1]<<endl;
        }
    }
    return 0;
}
