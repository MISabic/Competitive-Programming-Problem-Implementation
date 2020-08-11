#include<bits/stdc++.h>
#define sz 1429435
using namespace std;

struct {
    int sum,value;
} tree[sz*3];

void build_tree(int root,int left,int right)
{
    if(left==right){
        tree[root]={1,left};
        return ;
    }
    int child=root<<1;
    int mid=(left+right)>>1;
    build_tree(child,left,mid);
    build_tree(child+1,mid+1,right);
    tree[root].sum=tree[child].sum+tree[child+1].sum;
}

void update(int root,int left,int right,int index)
{
    if(left==right){
        tree[root]={0,left};
        return ;
    }
    int child=root<<1;
    int mid=(left+right)>>1;
    if(index<=mid) update(child,left,mid,index);
    else update(child+1,mid+1,right,index);
    tree[root].sum=tree[child].sum+tree[child+1].sum;
}

int query(int root,int left,int right,int index)
{
    if(left==right){
        return tree[root].value;
    }
    int child=root<<1;
    int mid=(left+right)>>1;
    if(index<=tree[child].sum) return query(child,left,mid,index);
    else return query(child+1,mid+1,right,index-tree[child].sum);
}

int main()
{
    build_tree(1,1,sz);

    for(int i=2; i<=sz; i+=2){
        update(1,1,sz,i);
    }
    for(int i=2; i<=sz; i++){
        int x=query(1,1,sz,i),picked=0;
        for(int j=x; j<=sz; j+=x){
            int y=query(1,1,sz,j-picked);
            update(1,1,sz,y);
            ++picked;
        }
    }

    int t,n;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d",&n);
        printf("Case %d: %d\n",i,query(1,1,sz,n));
    }
}
