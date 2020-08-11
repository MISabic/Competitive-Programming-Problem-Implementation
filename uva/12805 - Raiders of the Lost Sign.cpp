#include<bits/stdc++.h>
#define max 100005
using namespace std;

int arr[max],k;
vector<int>fact;
vector<int>pri;

int seive()
{
    memset(arr,0,sizeof(arr));
    for(int i=4; i<max; i=i*2)
        arr[i]=1;
    int n=sqrt(max);
    for(int i=3; i<=n; i+=2){
        if(arr[i]==0){
            for(int j=i*i; j<max; j+=i+i){
                arr[j]=1;
            }
        }
    }
    pri.push_back(2);
    for(int i=3; i<max; i+=2)
        if(arr[i]==0)
            pri.push_back(i);
    k=pri.size();
}

int factor(int num)
{
    if(num%2==0){
        while(num%2==0){
            fact.push_back(2);
            num/=2;
        }
    }
    int p=sqrt(num);
    for(int i=3; i<=p; i+=2){
        if(num%i==0){
            while(num%i==0){
                fact.push_back(i);
                num/=i;
            }
        }
    }
    if(num>1)
        fact.push_back(num);
}

char ch(char a,char b)
{
    if(a=='+' && b=='+')
        return '+';
    else if((a=='+' && b=='-') || (a=='-' && b=='+'))
        return '-';
    else if(a=='-' && b=='-')
        return '+';
}

int main()
{
    fact.clear();
    seive();
    char crr[100005];
    crr[1]='+',crr[2]='+';
    int k=pri.size();
    for(int i=3; i<=max; i++){
        if(arr[i]==0 && (i+1)%4==0){
            crr[i]='+';
        }
        else if(arr[i]==0 && (i-1)%4==0){
            crr[i]='-';
        }
        else{
            fact.clear();
            factor(i);
            char x=crr[fact[0]];
            for(int j=1; j<fact.size(); j++){
                x=ch(x,crr[fact[j]]);
            }
            crr[i]=x;
        }
    }
    int t,l;
    cin>>t;
    while(t--){
        cin>>l;
        cout<<crr[l]<<endl;
    }
    return 0;
}
