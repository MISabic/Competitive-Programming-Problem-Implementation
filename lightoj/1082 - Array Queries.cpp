#include<bits/stdc++.h>
using namespace std;

int *arr,*tree;

int build_tree(int root, int left, int right)
{
    if(left==right) return tree[root]=arr[left];

    int child=root*2;
    int mid=(left+right)/2;

    build_tree(child,left,mid);
    build_tree(child+1,mid+1,right);

    tree[root]=min(tree[child],tree[child+1]);
}

int query(int root, int left, int right, int i, int j)
{
    if(j<left || i>right) return 100005;
    if(left>=i && right<=j) return tree[root];

    int child=root*2;
    int mid=(left+right)/2;

    int res1=query(child,left,mid,i,j);
    int res2=query(child+1,mid+1,right,i,j);

    return min(res1,res2);
}

int main()
{
    int t,n,q,s,e;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d %d",&n,&q);

        arr=new int[n+5];
        tree=new int[n*3+5];

        for(int j=1; j<=n; j++){
            scanf("%d",&arr[j]);
        }
        build_tree(1,1,n);

        printf("Case %d:\n",i);
        for(int j=1; j<=q; j++){
            scanf("%d %d",&s,&e);
            printf("%d\n",query(1,1,n,s,e));
        }

        delete arr, delete tree;
    }
    return 0;
}
