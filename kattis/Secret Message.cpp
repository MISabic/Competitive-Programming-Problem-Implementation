#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>vec;
    for(int i=1; i<=100; i++)
        vec.push_back(i*i);
    int n,i;
    string str;
    cin>>n;
    while(n--){
        cin>>str;
        int len=str.length();
        for(i=0; i<vec.size(); i++)
            if(vec[i]>=str.length())
                break;
        //cout<<vec[i]<<"   "<<str.length()<<endl;
        for(int j=str.length(); j<vec[i]; j++)
            str+="*";
        int val=sqrt(vec[i]);
        char arr[val+2][val+2],fin[val+2][val+2];
        int c=0;
        for(int i=0; i<val; i++){
            for(int j=0; j<val; j++){
                arr[i][j]=str[c++];
            }
        }
        for(int i=0; i<val; i++){
            for(int j=0; j<val; j++){
                fin[i][j]=arr[val-j-1][i];
            }
        }
        c=0;
        for(int i=0; i<val; i++){
            for(int j=0; j<val; j++){
                if(fin[i][j]!='*' && c<=len){
                    cout<<fin[i][j];
                    ++c;
                }
                //cout<<fin[i][j];
            }
        }
        cout<<endl;
    }
    return 0;
}

