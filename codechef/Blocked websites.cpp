#include<bits/stdc++.h>
using namespace std;

string temp;
vector<string>ans;

struct node
{
    bool endmark;
    node* next[26 + 1];
    node()
    {
        endmark = false;
        for (int i = 0; i < 26; i++)
            next[i] = NULL;
    }
} *root, *res;

void insert(string str, int len, node* curr)
{
    for (int i = 0; i < len; i++)
    {
        int id = str[i] - 'a';
        if (curr->next[id] == NULL)
            curr->next[id] = new node();
        curr = curr->next[id];
    }
    curr->endmark = true;
}

string search(string str, int len, node* curr)
{
    string temp;
    int i;
    for (i = 0; i < len; i++)
    {
        int id = str[i] - 'a';
        temp += str[i];
        if (curr->next[id] == NULL)
            return temp;

        curr = curr->next[id];
    }
    if(i==len) return "no";
    return temp;
}

void del(node* cur)
{
    for (int i = 0; i < 26; i++)
        if (cur->next[i])
            del(cur->next[i]);

    delete (cur);
}

int main()
{
    int n;
    char ch;
    string str;
    while(scanf("%d",&n)==1){
        root = new node();
        res = new node();
        vector<string>vec;
        for(int i=0; i<n; i++){
            scanf(" %c",&ch);
            cin>>str;
            if(ch=='+')
                insert(str, str.length(), root);
            else
                vec.push_back(str);
        }

        set<string>st;
        int flag=0;
        for(int i=0; i<vec.size(); i++){
            if(search(vec[i], vec[i].length(), root)=="no"){
                flag=1;
                break;
            }
            else{
                string prefix = search(vec[i], vec[i].length(),root);
                st.insert(prefix);
            }
        }
        if(flag==1) printf("-1\n");
        else{
            printf("%d\n",st.size());
            for(auto i:st){
                cout<<i<<endl;
            }
        }
        del(root);
    }
    return 0;
}
