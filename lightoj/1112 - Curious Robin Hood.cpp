#include<bits/stdc++.h>
#define sz 100005
using namespace std;

int tree[sz*3+5];

int build_tree(int arr[],int root,int left,int right)
{
    if(left==right) return tree[root]=arr[left];
    int child=2*root;
    int mid=(left+right)/2;
    build_tree(arr,child,left,mid);
    build_tree(arr,child+1,mid+1,right);
    return tree[root]=tree[child]+tree[child+1];
}

int update(int arr[],int root,int left,int right,int type,int index,int value)
{
    if(index<left || index>right) return 0;
    if(index==left && index==right){
        int temp=tree[root];
        (type==1)?(tree[root]=value):(tree[root]+=value);
        return temp;
    }
    int child=2*root;
    int mid=(left+right)/2;
    int v1=update(arr,child,left,mid,type,index,value);
    int v2=update(arr,child+1,mid+1,right,type,index,value);
    tree[root]=tree[child]+tree[child+1];
    return max(v1,v2);
}

int query(int arr[],int root,int left,int right,int u_left,int u_right)
{
    if(u_right<left || u_left>right) return 0;
    if(u_left<=left && right<=u_right) return tree[root];
    int child=2*root;
    int mid=(left+right)/2;
    int res1=query(arr,child,left,mid,u_left,u_right);
    int res2=query(arr,child+1,mid+1,right,u_left,u_right);
    return res1+res2;
}

int main()
{
    int t,n,q,type,ind1,ind2,value;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d %d",&n,&q);
        int arr[n+5];
        for(int j=1; j<=n; j++){
            scanf("%d",&arr[j]);
        }
        build_tree(arr,1,1,n);

        printf("Case %d:\n",i);
        for(int j=0; j<q; j++){
            scanf("%d",&type);
            if(type==1){
                scanf("%d",&ind1);
                printf("%d\n",update(arr,1,1,n,1,ind1+1,0));
                /*for(int j=1; j<=15; j++){
                    cout<<j<<" :: "<<tree[j]<<endl;
                }*/
            }
            else if(type==2){
                scanf("%d %d",&ind1,&value);
                update(arr,1,1,n,2,ind1+1,value);
                /*for(int j=1; j<=15; j++){
                    cout<<j<<" :: "<<tree[j]<<endl;
                }*/
            }
            else{
                scanf("%d %d",&ind1,&ind2);
                printf("%d\n",query(arr,1,1,n,ind1+1,ind2+1));
            }
        }
    }
    return 0;
}
