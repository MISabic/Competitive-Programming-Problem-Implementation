#include<bits/stdc++.h>
#define read freopen("in.txt","r",stdin);
#define ll long long
using namespace std;

int main()
{
    //read;
    char arr[10000],brr[10000],crr[10000];
    map<char,int>mp;
    map<char,int>mp1;
    while(scanf("%s %s",arr,brr)==2){
        int len1=strlen(arr),len2=strlen(brr);
        for(int i=0; i<len1; i++){
            mp[arr[i]]++;
        }
        int gh=0;
        for(int i=0; i<len2; i++){
            if(!mp[brr[i]]){
                cout<<0<<endl;
                gh=1;
                break;
            }
        }
        if(gh==1) continue;
        int tr,k=0,i=0,j=0;
        for(i=0; i<len1; i++){
            tr=0;
            for(j; j<len2; j++){
                if(arr[i]==brr[j] && tr==0){
                    crr[k++]=brr[j];
                    if(arr[i+1]==brr[j+1]){
                        ++i;
                    }
                    else
                        tr=1;
                }
                else if(arr[i]!=brr[j]){
                    break;
                }
            }
        }
        if(tr==1) j--;
        for(j; j<len2; j++){
            if(arr[len1-1]!=brr[j]){
                cout<<0<<endl;
                gh=1;
                break;
            }
        }
        if(gh==1) continue;
        crr[k]='\0';
        if(strcmp(arr,crr)==0)
            cout<<1<<endl;
        else
            cout<<0<<endl;
        mp.clear();
    }
    return 0;
}


