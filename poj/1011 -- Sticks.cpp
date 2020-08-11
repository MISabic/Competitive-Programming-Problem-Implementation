#include<iostream>
#include<cstring>
#include<algorithm>
#include<functional>
using namespace std;

int n,totalSticks,length,arr[100],visited[100];

bool dfs(int index,int now,int cnt)
{
    if(cnt*length==totalSticks)
        return true;

    for(int i=index; i<n; i++){
        if(visited[i] || (i && !visited[i-1] && arr[i]==arr[i-1])) continue;
        if(now+arr[i]==length){
            visited[i]=1;
            if(dfs(0,0,cnt+1)) return true;
            visited[i]=0;
            return false;
        }
        else if(now+arr[i]<length){
            visited[i]=1;
            if(dfs(i+1,now+arr[i],cnt)) return true;
            visited[i]=0;
            if(now==0) return false;
        }
    }
    return false;
}

int main()
{
    while(cin>>n && n){
        totalSticks=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            totalSticks+=arr[i];
        }
        sort(arr,arr+n,greater<int>());
        for(length=arr[0]; length<=totalSticks; length++){
            if(totalSticks%length==0){
                memset(visited,0,sizeof(visited));
                if(dfs(0,0,0)){
                    cout<<length<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
