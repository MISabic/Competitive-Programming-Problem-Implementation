#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*map<string,string> arr;
    arr["Sabic"]="Naruto";
    arr["Shikamaru"]="Boruto";
    arr.insert(pair<string,string>("Sasuke","Sabic"));
    arr.insert(make_pair("Might Guy","Sabic"));
    arr.insert(map<string,string>::value_type("Obito","Sabic"));
    for(map<string,string>::iterator i=arr.begin(); i!=arr.end(); i++)
        cout<<i->first<<" : "<<(*i).second<<endl;*/
    map<int,int>mymap;
    int input[]= {-102,1,134565589,134565589,-102,66666668,134565589,66666668,-102,1,-2};
    int assign=0,compressed[100],c=0,n=sizeof(input)/sizeof(int); //array size;
    for(int i=0; i<n; i++)
    {
        int x=input[i];
        if(mymap.find(x)==mymap.end()) //x not yet compressed
        {
            mymap[x]=assign;    //cout<<mymap[x]<<endl;
            printf("Mapping %d with %d\n",x,assign);
            assign++;
        }
        x=mymap[x];
        compressed[ c++ ]=x;
    }
    for(map<int,int>::iterator it=mymap.begin(); it!=mymap.end(); it++)
        cout<<it->first<<" "<<it->second<<endl;
    printf("Compressed array: ");
    for(int i=0; i<n; i++) printf("%d ",compressed[i]);
    puts("");
}
