#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[25];
    int t,c[26],count=0;
    memset(c,0,sizeof(c));
    cin>>t;
    while(t--){
        cin>>arr;
        c[(int)arr[0]-97]++;
    }
    for(int i=0; i<26; i++)
        if(c[i]!=0 && c[i]<10) ++count;
        else if(c[i]>=10) count+=c[i]/10+((c[i]%10!=0)?1:0);
    printf("%d\n",count);
    return 0;
}
