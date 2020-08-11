#include<bits/stdc++.h>
using namespace std;

int nr_comparisons[4005];

int main()
{
    int n,c=0;
    string str[4005];
    while(scanf("%d",&n)==1 && n){

        for(int i=0; i<n; i++)
            cin>>str[i];

        sort(str, str+n);

        for(int i=0; i<n-1; i++)
        {
            string cs = str[i], ns = str[i + 1];
            int nr = 1;
            for(int i=0; cs[i]==ns[i]; nr++, i++){
                nr++;
                if(cs[i]=='\0') break;
            }
            nr_comparisons[i] = nr;
        }
        long long T=0;
        for(int i=0; i<n-1; i++)
        {
            int nr=nr_comparisons[i];
            T+=nr;
            for(int j=i+1; j<n-1; j++)
            {
                if(nr_comparisons[j]<nr)
                    nr=nr_comparisons[j];
                T+=nr;
            }
        }
        printf("Case %d: %lld\n",++c,T);
    }
    return 0;
}
