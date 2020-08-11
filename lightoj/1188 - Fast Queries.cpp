// not solved

#include<bits/stdc++.h>
#define sz 100005

using namespace std;

void build_tree(vector< unordered_set<int> > &tree, int arr[], int root, int left, int right)
{
    if(left==right){
        tree[root].insert(arr[left]);
        return ;
    }
    int child=root<<1;
    int mid=(left+right)>>1;
    build_tree(tree,arr,child,left,mid);
    build_tree(tree,arr,child+1,mid+1,right);
    tree[root]=tree[child];
    tree[root].insert(tree[child+1].begin(), tree[child+1].end());
}

unordered_set<int> query(vector< unordered_set<int> > &tree, int arr[], int root, int left, int right, int q_left, int q_right)
{
    if(q_right<left || q_left>right) return {};
    if(q_left<=left && right<=q_right) return tree[root];
    int child=root<<1;
    int mid=(left+right)>>1;
    unordered_set<int> res1=query(tree,arr,child,left,mid,q_left,q_right);
    unordered_set<int> res2=query(tree,arr,child+1,mid+1,right,q_left,q_right);
    res1.insert(res2.begin(),res2.end());
    return res1;
}

int main()
{
    //freopen("out.txt","r",stdin);
    int t,n,q,a,b;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d %d",&n,&q);

        vector< unordered_set<int> >tree(n*3);

        int arr[n+5];
        for(int j=1; j<=n; j++){
            scanf("%d",&arr[j]);
        }
        build_tree(tree,arr,1,1,n);
        printf("Case %d:\n",i);
        for(int j=0; j<q; j++){
            scanf("%d %d",&a,&b);
            printf("%d\n",query(tree,arr,1,1,n,a,b).size());
        }

        for(int i=0; i<=n; i++){
            tree[i].clear();
        }
    }
    return 0;
}
