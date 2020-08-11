#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k=2,p=0,v;
    map<char,char>setdig;
    map<string,int>check;
    string str;
    for(int i=65; i<90; i++){
        if(i!=81){
            setdig.insert(make_pair(i,k+'0'));
            ++p;
            if(p%3==0) ++k;
        }
    }
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=0; i<n; i++){
            char arr[100000],num[100000];
            scanf("%s",arr);
            int len=strlen(arr),x=0;
            for(int j=0; j<len; j++){
                if(isalpha(arr[j])) arr[j]=setdig[arr[j]];
                if(isdigit(arr[j])) num[x++]=arr[j];
            }
            num[x]='\0';
            stringstream ss;
            ss<<num;
            ss>>str;
            check.insert(make_pair(str,0));
            ++check[str];
        }
        int flag=0;
        for(map<string,int>::iterator it=check.begin(); it!=check.end(); it++)
            if(it->second!=1){
                flag=1;
                printf("%c%c%c-%c%c%c%c %d\n",it->first[0],it->first[1],it->first[2],it->first[3],it->first[4],it->first[5],it->first[6],it->second);
            }
        if(flag==0) cout<<"No duplicates.\n";
        if(t!=0) printf("\n");
        check.clear();
    }
    return 0;
}
