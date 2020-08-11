#include<bits/stdc++.h>
#define sz 100100
using namespace std;

char str[sz];
int tree[sz*3];

void update_tree(int root,int left,int right,int update_left,int update_right)
{
    //cout<<root<<" "<<left<<" "<<right<<endl;
    if(update_right<left || update_left>right) return ;
    if(update_left<=left && right<=update_right){
        ++tree[root];
        return ;
    }

    int child=root<<1;
    int mid=(left+right)>>1;

    update_tree(child,left,mid,update_left,update_right);
    update_tree(child+1,mid+1,right,update_left,update_right);
}

int query(int root,int left,int right,int index)
{
    if(index<left || index>right) return 0;
    if(index==left && index==right) return tree[root];

    int child=root<<1;
    int mid=(left+right)>>1;
    int res1=0,res2=0;

    if(index>=left && index<=mid){
        res1=tree[root]+query(child,left,mid,index);
    }
    if(index>=mid+1 && index<=right){
        res2=tree[root]+query(child+1,mid+1,right,index);
    }
    return res1+res2;
}

int main()
{
    int t,q,xi,xj,ind;
    char ch;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){

        scanf("%s%d",str,&q);
        int len=strlen(str);

        memset(tree,0,sizeof(tree));

        printf("Case %d:\n",i);
        for(int j=0; j<q; j++){
            scanf(" %c",&ch);
            if(ch=='I'){
                scanf("%d %d",&xi,&xj);
                update_tree(1,1,len,xi,xj);
                /*for(int k=1; k<=20; k++){
                    cout<<k<<" :: "<<tree[k]<<endl;
                }*/
            }
            else{
                scanf("%d",&ind);
                int numOfTimes=query(1,1,len,ind);
                //cout<<"numOfTimes :: "<<numOfTimes<<endl;
                if(numOfTimes%2) printf("%d\n",abs((str[ind-1]-'0')-1));
                else printf("%c\n",str[ind-1]);
            }
        }
    }
    return 0;
}
