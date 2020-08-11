#include<bits/stdc++.h>
#define limit 1000000000005
using namespace std;

priority_queue<unsigned long long,vector<unsigned long long>, greater<unsigned long long>>luckyNums;
vector<unsigned long long>tempLuckyNums,veryLuckyNums;
unordered_map<unsigned long long,int>ump;

void generateLuckyNumbers()
{
    queue<unsigned long long>q;
    q.push(0);
    while(!q.empty()){
        unsigned long long x=q.front();
        q.pop();
        unsigned long long f=x*10+4;
        unsigned long long s=x*10+7;

        if(f<limit){
            luckyNums.push(f);
            tempLuckyNums.push_back(f);
            q.push(f);
            ump[f]=1;
        }
        if(s<limit){
            luckyNums.push(s);
            tempLuckyNums.push_back(s);
            q.push(s);
            ump[s]=1;
        }
    }
}

void generateVeryLuckyNums()
{
    while(!luckyNums.empty()){
        unsigned long long x=luckyNums.top();
        //cout<<x<<endl;

        veryLuckyNums.push_back(x);

        luckyNums.pop();

        for(int i=0; i<tempLuckyNums.size(); i++){
            unsigned long long value=x*tempLuckyNums[i];
            if(value<limit && ump[value]!=1){
                luckyNums.push(value);
                ump[value]=1;
            }
            else if(value>limit){
                break;
            }
        }
    }
}

int main()
{
    generateLuckyNumbers();
    generateVeryLuckyNums();

    vector<unsigned long long>::iterator it;
    it=unique(veryLuckyNums.begin(),veryLuckyNums.end());
    veryLuckyNums.resize(distance(veryLuckyNums.begin(),it));

    //cout<<veryLuckyNums.size()<<endl;
    /*for(int i=0; i<veryLuckyNums.size(); i++){
        cout<<veryLuckyNums[i]<<endl;
    }*/

    unsigned long long t,a,b;
    scanf("%llu",&t);
    for(int i=1; i<=t; i++){
        scanf("%llu %llu",&a,&b);

        int high=upper_bound(veryLuckyNums.begin(),veryLuckyNums.end(),b)-veryLuckyNums.begin();
        int low=lower_bound(veryLuckyNums.begin(),veryLuckyNums.end(),a)-veryLuckyNums.begin();
        cout<<"Case "<<i<<": "<<high-low<<endl;
    }
    return 0;
}
