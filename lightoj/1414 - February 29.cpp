#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("out.txt","w",stdout);
    long long c,d1,d2,y1,y2;
    string str1,str2;
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>str1;
        scanf("%lld, %lld",&d1,&y1);
        cin>>str2;
        scanf("%lld, %lld",&d2,&y2);
        int cnt=0;
        if(y1==y2 && ((y1%4==0 && y1%100) || (y1%400==0))){
            if((str1=="January" || str1=="February") && ((str2=="February" && d2==29) || (str2!="January" && str2!="February"))){
                ++cnt;
            }
        }
        else{
            if((y1%4==0 && y1%100) || (y1%400==0)){
                if(str1=="January" || str1=="February") ++cnt;
            }
            if((y2%4==0 && y2%100) || (y2%400==0)){
                if((str2=="February" && d2==29) || (str2!="January" && str2!="February")) ++cnt;
            }
            for(long long i=y1+1; i<y2; i++){
                if((i%4==0 && i%100) || (i%400==0)){
                    long long four=((y2-1)/4)-((i-1)/4);
                    long long hundred=((y2-1)/100)-((i-1)/100);
                    long long fourHundred=((y2-1)/400)-((i-1)/400);
                    long long exclude=((y2-1)/1600)-((i-1)/1600);
                    cnt+=(four+fourHundred-hundred);
                    //cout<<four<<" "<<hundred<<" "<<fourHundred<<endl;
                    break;
                }
            }
        }
        cout<<"Case "<<i<<": "<<cnt<<endl;
    }
    return 0;
}
