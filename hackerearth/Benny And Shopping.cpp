#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,num,flag=0;
    char arr[1005],brr[1005];
    cin>>t;
    while(t--){
        if(flag==0){
            getc(stdin);
            flag=1;
        }
        gets(arr);
        int len=strlen(arr),k=0;
        for(i=0; i<len; i++){
            if(arr[i]=='$'){
                for(j=i+1; j<len; j++){
                    if(isalpha(arr[j])) break;
                    if(isdigit(arr[j])){
                        brr[k++]=arr[j];
                    }
                }
                if(isalpha(arr[j])) break;
            }
        }
        brr[k]='\0',flag=0;
        len=strlen(brr);
        cout<<'$';
        for(i=0; i<len; i++){
            if(brr[i]!='0'){
                flag=1;
                for(j=i; j<len; j++)
                    cout<<brr[j];
                break;
            }
        }
        if(flag==0) cout<<'0';
        cout<<endl;
    }
    return 0;
}
