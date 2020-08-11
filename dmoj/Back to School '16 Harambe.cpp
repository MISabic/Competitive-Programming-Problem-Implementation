#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
#define read freopen("A-large.in","r",stdin)
#define write freopen("out.out","w",stdout)
using namespace std;

int main()
{
    //read;
    //write;
    char str[2000];
    while(gets(str)){
        int u=0,l=0,len=strlen(str);
        for(int i=0; i<len; i++){
            if(isupper(str[i])) u++;
            else if(islower(str[i])) l++;
        }
        if(u>l){
            for(int i=0; i<len; i++){
                cout<<(char)toupper(str[i]);
            }
        }
        else if(l>u){
            for(int i=0; i<len; i++){
                cout<<(char)tolower(str[i]);
            }
        }
        else cout<<str;
        cout<<endl;
    }
    return 0;
}

