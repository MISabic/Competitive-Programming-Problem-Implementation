#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,sz,n,v;
    string str;
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>sz>>n;
        deque<int>dq;
        cout<<"Case "<<i<<":"<<endl;
        for(int j=0; j<n; j++){
            cin>>str;
            if(str=="pushLeft"){
                cin>>v;
                if(dq.size()==sz) cout<<"The queue is full"<<endl;
                else{
                    dq.push_front(v);
                    cout<<"Pushed in left: "<<v<<endl;
                }
            }
            else if(str=="pushRight"){
                cin>>v;
                if(dq.size()==sz) cout<<"The queue is full"<<endl;
                else{
                    dq.push_back(v);
                    cout<<"Pushed in right: "<<v<<endl;
                }
            }
            else if(str=="popLeft"){
                if(dq.size()==0) cout<<"The queue is empty"<<endl;
                else{
                    cout<<"Popped from left: "<<dq.front()<<endl;
                    dq.pop_front();
                }
            }
            else{
                if(dq.size()==0) cout<<"The queue is empty"<<endl;
                else{
                    cout<<"Popped from right: "<<dq.back()<<endl;
                    dq.pop_back();
                }
            }
        }
    }
    return 0;
}
