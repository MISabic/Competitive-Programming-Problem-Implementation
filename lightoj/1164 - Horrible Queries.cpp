#include<bits/stdc++.h>
#define sz 100000
using namespace std;

pair<long long,long long> tree[sz*3+5];

void update(int arr[],int root,int left,int right,int u_left,int u_right,int value)
{
    //cout<<root<<" "<<left<<" "<<right<<endl;
    if(u_right<left || u_left>right) return ;
    if(u_left<=left && right<=u_right){
        tree[root]={tree[root].first+(right-left+1)*value,tree[root].second+value};
        return ;
    }
    int child=2*root;
    int mid=(left+right)/2;
    update(arr,child,left,mid,u_left,u_right,value);
    update(arr,child+1,mid+1,right,u_left,u_right,value);
    tree[root]={tree[child].first+tree[child+1].first+(right-left+1)*tree[root].second,tree[root].second};
}

long long query(int arr[],int root,int left,int right,int q_left,int q_right,long long carry=0)
{
    if(q_right<left || q_left>right) return 0;
    if(q_left<=left && right<=q_right){
        return tree[root].first+carry*(right-left+1);
    }
    int child=2*root;
    int mid=(left+right)/2;
    long long res1=query(arr,child,left,mid,q_left,q_right,carry+tree[root].second);
    long long res2=query(arr,child+1,mid+1,right,q_left,q_right,carry+tree[root].second);
    return res1+res2;
}

int main()
{
    int t,n,q,type,x,y,v;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d %d",&n,&q);
        int arr[n+5];
        memset(tree,0,sizeof(tree));
        printf("Case %d:\n",i);
        for(int j=0; j<q; j++){
            scanf("%d",&type);
            if(!type){
                scanf("%d %d %d",&x,&y,&v);
                update(arr,1,1,n,x+1,y+1,v);
                /*for(long long k=1; k<=30; k++){
                    cout<<k<<" :: "<<tree[k].first<<" "<<tree[k].second<<endl;
                }*/
            }
            else{
                scanf("%d %d",&x,&y);
                printf("%lld\n",query(arr,1,1,n,x+1,y+1));
            }
        }
    }
    return 0;
}
