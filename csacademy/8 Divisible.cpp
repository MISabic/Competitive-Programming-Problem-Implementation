#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string>vec;
    for(int i=0; i<=999; i+=8){
        string str;
        if(i<10){
            str="00";
            str+=(i+'0');
        }
        else if(i<100){
            str="0";
            int n=i%10;
            int div=i/10;
            str+=(div+'0');
            str+=(n+'0');
        }
        else{
            int n=i;
            while(n!=0){
                int rem=n%10;
                n/=10;
                str+=(rem+'0');
            }
            reverse(str.begin(),str.end());
        }
        vec.push_back(str);
    }
    string str,temp;
    while(cin>>str){
        int check=0,cnt[15];
        vector<string>res;
        if(str.length()<3){
            stringstream ss1,ss2;
            int k=atoi(str.c_str());
            reverse(str.begin(),str.end());
            int p=atoi(str.c_str());
            for(int i=0; i<100; i+=8){
                if(k==i || p==i){
                    stringstream ss;
                    ss<<i;
                    ss>>temp;
                    if(temp.size()==str.size()){
                        cout<<i<<endl;
                        check=1;
                        break;
                    }
                }
            }
            if(check==0) cout<<-1<<endl;
        }
        else{
            memset(cnt,0,sizeof(cnt));
            for(int i=0; i<str.length(); i++){
                ++cnt[(str[i]-'0')];
            }

            for(int i=0; i<vec.size(); i++){
                int flag=0;
                int chk[15];

                memset(chk,0,sizeof(chk));
                for(int j=0; j<3; j++){
                    ++chk[(vec[i][j]-'0')];
                }
                for(int j=0; j<10; j++){
                    if(chk[j]>cnt[j]){
                        flag=1;
                        break;
                    }
                }
                if(flag==1) continue;

                if(flag==0){
                    check=1;
                    --cnt[(vec[i][0]-'0')];
                    --cnt[(vec[i][1]-'0')];
                    --cnt[(vec[i][2]-'0')];
                    string temp;
                    int flag=0;
                    for(int i=1; i<10; i++){
                        if(flag==0 && cnt[i]>0){
                            temp+=(i+'0');
                            for(int j=0; j<cnt[0]; j++){
                                temp+="0";
                            }
                            for(int j=0; j<cnt[i]-1; j++){
                                temp+=(i+'0');
                            }
                            flag=1;
                        }
                        else{
                            for(int j=0; j<cnt[i]; j++){
                                temp+=(i+'0');
                            }
                        }
                    }
                    temp+=vec[i];
                    if(temp.size()==str.size())
                        res.push_back(temp);
                    ++cnt[(vec[i][0]-'0')];
                    ++cnt[(vec[i][1]-'0')];
                    ++cnt[(vec[i][2]-'0')];
                }
            }
            if(check==0){
                cout<<-1<<endl;
                continue;
            }
            sort(res.begin(),res.end());
            for(int i=0; i<res.size(); i++){
                if(res[i][0]!='0'){
                    cout<<res[i]<<endl;
                    check=2;
                    break;
                }
            }
            if(check!=2) cout<<-1<<endl;
        }
    }
    return 0;
}
