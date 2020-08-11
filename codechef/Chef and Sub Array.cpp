#include <bits/stdc++.h>
using namespace std;

struct node {
    node *ch[2];
    int r,v,s;
    node(int v):v(v) {
        s = 1;
        r = rand();
        ch[0] = ch[1] = NULL;
    }
    bool operator <(const node &rhs) const {
        return r<rhs.r;
    }
    int cmp(int x) {
        if(x == v) return -1;
        return x<v ? 0:1;
    }
    void maintain() {
        s = 1;
        if(ch[0] != NULL) s += ch[0]->s;
        if(ch[1] != NULL) s += ch[1]->s;
    }
};

struct Treap {
    inline void rotate(node * &o,int d) {
        node *k = o->ch[d^1];
        o->ch[d^1] = k->ch[d];
        k->ch[d] = o;
        o->maintain();
        k->maintain();
        o = k;
    }

    inline void insert(node * &o,int x) {
        if(o == NULL) o = new node(x);
        else{
            int d = (x<o->v ? 0:1);
            insert(o->ch[d],x);
            if(o->ch[d]->r>o->r) rotate(o,d^1);
        }
        o->maintain();
    }

    inline void remove(node * &o,int x) {
        int d = o->cmp(x);
        if(d == -1) {
            node *u = o;
            if(o->ch[0] != NULL && o->ch[1] != NULL) {
                int d2 = (o->ch[0]->r>o->ch[1]->r? 1:0);
                rotate(o,d2);
                remove(o->ch[d2],x);
            } else {
                if(o->ch[0] == NULL) o = o->ch[1];
                else o = o->ch[0];
                delete u;
            }
        }
        else {
            remove(o->ch[d],x);
        }
        if(o != NULL) o->maintain();
    }

    inline int kth(node * o,int k) {
        if(o == NULL || k <= 0 || k>o->s) return 0;
        int s = (o->ch[0] == NULL ? 0: o->ch[0]->s);
        if(k == s+1) return o->v;
        else if(k <= s) return kth(o->ch[0],k);
        else return kth(o->ch[1],k-s-1);
    }
}treap;


int main ()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n=0,k=0,p=0,res=0,val=0,index=0,indfront=0,indback=0,arr[100100];
    char ch;
    while(scanf("%d %d %d",&n,&k,&p)==3){
        for(int i=1; i<=n; i++){
            scanf("%d",&arr[i]);
            res+=arr[i];
        }

        if(k>=n){
            for(int i=0; i<p; i++){
                scanf(" %c",&ch);
                if(ch=='?'){
                    printf("%d\n",res);
                }
            }
            continue;
        }

        node *root = NULL;
        vector<int>vec,reversearr;
        int flag=0,con=0,sum=0;
        for(int i=1; i<=n; i++){
            if(flag==0){
                ++con;
                sum+=arr[i];
                if(con==k){
                    flag=1;
                    vec.push_back(sum);
                    treap.insert(root,sum);
                }
            }
            else{
                sum-=arr[i-k];
                sum+=arr[i];
                vec.push_back(sum);
                treap.insert(root,sum);
            }
        }

        res=vec.size();

        for(int i=n; i>=1; i--){
            reversearr.push_back(arr[i]);
        }
        reverse(vec.begin(),vec.end());

        con=0,index=0,indfront=k,indback=n-k,val=vec.back();
        for(int i=0; i<p; i++){
            scanf(" %c",&ch);
            if(ch=='!'){
                treap.remove(root,vec[index]);
                val=(val-reversearr[reversearr.size()-k])+reversearr[index];
                treap.insert(root,val);
                vec.push_back(val);
                //cout<<" hello "<<val<<endl;
                reversearr.push_back(reversearr[index]);
                ++index;
            }
            else{
                printf("%d\n",treap.kth(root,res));
            }
        }
    }
    return 0;
}

