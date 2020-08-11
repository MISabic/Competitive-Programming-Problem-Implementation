#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
using namespace std;

int main()
{
    int n,r,arr[30];
    string str,fin;
    while(cin>>n>>str){
        int check=0,mx=0;
        memset(arr,0,sizeof(arr));
        for(int i=0; i<str.length(); i++){
            arr[(int)str[i]-97]++;
        }
        for(int i=0; i<27; i++){
            if(arr[i]!=0){
                for(int k=i+1; k<27; k++){
                    if(arr[k]!=0){
                        char a=(char)(i+97),b=(char)(k+97);
                        fin="";
                        for(int j=0; j<str.length(); j++){
                            if(str[j]==a || str[j]==b){
                                fin+=str[j];
                            }
                        }
                        int f=0;
                        for(int j=1; j<fin.length(); j++){
                            if(fin[j-1]==fin[j]){
                                f=1;
                                break;
                            }
                        }

                        if(f==0 && fin.length()>mx){
                            mx=fin.length();
                        }
                    }
                }
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}



