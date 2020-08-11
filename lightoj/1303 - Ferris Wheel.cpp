// Read point 4 again

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,store[22][22];

    for(int n=1; n<=20; n++){
        for(int m=2; m<=20; m++){
            queue<int>q;
            vector<int>line;

            int visited[n+5][m+5],total_visited[n+5],total=0,current_seat=0,chk=0;
            memset(total_visited,0,sizeof(total_visited));
            memset(visited,0,sizeof(visited));

            for(int j=1; j<=m-n; j++) q.push(0);
            for(int j=1; j<=n; j++){
                if(q.size()<m){
                    total+=5;
                    ++total_visited[j];
                    visited[j][current_seat]=1;
                    current_seat=(current_seat+1)%m;
                    q.push(j);
                }
                else line.push_back(j);
            }

            while(!chk){ // loop until all programmers sit on m seat(s) for one time

                total+=5;
                if(line.size()==0 && !q.front()){
                    q.push(q.front());
                    q.pop();
                }
                else if(!q.front()){
                    int flag=0;
                    for(int j=0; j<line.size(); j++){ // search for the programmer who didn't sit on the current seat
                        if(!visited[line[j]][current_seat]){
                            flag=1;
                            ++total_visited[line[j]];
                            visited[line[j]][current_seat]=1;
                            q.pop();
                            q.push(line[j]);
                            line.erase(line.begin()+j); // to erase the first programmer who didn't sit on the current seat
                            break;
                        }
                    }
                }
                else if(q.front()){
                    if(total_visited[q.front()]!=m) line.push_back(q.front());
                    q.pop();
                    int flag=0;
                    for(int j=0; j<line.size(); j++){
                        if(!visited[line[j]][current_seat]){
                            flag=1;
                            ++total_visited[line[j]];
                            visited[line[j]][current_seat]=1;
                            q.push(line[j]);
                            line.erase(line.begin()+j);
                            break;
                        }
                    }
                    if(!flag){
                        q.push(0);
                    }
                }
                current_seat=(current_seat+1)%m;
                for(int j=1; j<=n; j++)
                    if(total_visited[j]!=m){
                        chk=1;
                        break;
                    }
                chk=abs(chk-1);
            }
            int c=0,last_seat=0;
            while(!q.empty()){
                ++c;
                if(q.front()) last_seat=c;
                q.pop();
            }
            store[n][m]=total+c*5;
            //cout<<n<<" "<<m<<" :: "<<store[n][m]<<endl;
        }
    }


    //freopen("out.txt","w",stdout);
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>n>>m;
        cout<<"Case "<<i<<": "<<store[n][m]<<endl;
    }
    return 0;
}
