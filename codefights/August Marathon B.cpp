#include<bits/stdc++.h>
#define ll long long
#define read freopen("in.txt","r",stdin)
using namespace std;

string substitutionCipherDecryption(string contents, string signature, string encryptedSignature) {
    map<char,char>mp;
    map<char,char>mp1;
    int len1=contents.length(),len2=signature.length(),len3=encryptedSignature.length();
    for(int i=97; i<=122; i++){
        mp[(char)i]='*';
    }
    for(int i=0; i<len2; i++){
        mp[signature[i]]=encryptedSignature[i];
    }
    vector<char>vec;
    for(int i=97; i<=122; i++){
        int f=0;
        for(int j=97; j<=122; j++){
            if(mp[(char)j]==(char)i){
                f=1;
            }
        }
        if(f==0)
            vec.push_back((char)i);
    }
    int k=0;
    for(int i=97; i<=122; i++){
        if(mp[i]=='*'){
            mp[i]=vec[k++];
        }
    }
    for(int i=97; i<=122; i++){
        mp1[mp[(char)i]]=(char)i;
    }
    for(int i=0; i<len1; i++){
        contents[i]=mp1[contents[i]];

    }
    return contents;
}


int main()
{
    string a,b,c;
    while(cin>>a>>b>>c){
        substitutionCipherDecryption(a,b,c);
    }
    return 0;
}
