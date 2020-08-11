#include<bits/stdc++.h>
#define read freopen("in.txt","r",stdin);
#define ll long long
using namespace std;

int main()
{
    //read;
    vector<int>vec;
    int a,b,j;
    for(int i=1; i<=9; i++){
        j=i;
        while(j<1000010){
            vec.push_back(j);
            j=(j*10)+i;
        }
    }
    while(scanf("%d %d",&a,&b)==2){
        int count=0;
        for(int i=0; i<vec.size(); i++){
            if(vec[i]>=a && vec[i]<=b)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}

