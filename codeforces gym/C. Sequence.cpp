#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("INPUT.TXT","r",stdin);
    freopen("OUTPUT.TXT","w",stdout);
    long long n,arr[10]={48889,77789,155578,111356,122227,244445};
    while(cin>>n){
        long long k=1;
        if(n<=24){
            for(int i=1; i<n; i++){
                k*=2;
                stringstream ss;
                ss<<k;
                string str;
                ss>>str;
                sort(str.begin(),str.end());
                ss.clear();
                ss<<str;
                ss>>k;
            }
            cout<<k<<endl;
        }
        else{
            cout<<arr[(n-25)%6]<<endl;
        }
    }
    return 0;
}
