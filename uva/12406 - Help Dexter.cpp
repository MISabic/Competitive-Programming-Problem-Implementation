#include<bits/stdc++.h>
using namespace std;

char arr[300000][20]={"0","2"};

int main()
{
    char brr[20],crr[20],one[20]="1",two[20]="2";
    int i=2,t,n,q,h[19],k=0,cas=0;
    for(i; i<150000; i*=2){
        for(int j=i/2; j<i; j++){
            strcat(one,arr[j]);
            strcat(two,arr[j]);
            strcpy(arr[j*2],one);
            strcpy(arr[j*2+1],two);
            strcpy(one,"1"),strcpy(two,"2");
        }
    }
    while(k!=19){
        h[k]=(2<<(k-2));
        ++k;
    }
    h[1]=1;
    long long ll;
    stringstream ss;
    cin>>t;
    while(t--){
        cin>>n>>q;
        printf("Case %d:",++cas);
        long long flag=0,track;
        for(i=h[n]; i<h[n+1]; i++){
            ss.clear();
            ss<<arr[i];
            ss>>ll;
            if(ll%(2<<(q-1))==0){
                track=ll;
                printf(" %lld",ll);
                flag=1;
                break;
            }
        }
        for(i=h[n+1]-1; i>=h[n]; i--){
            ss.clear();
            ss<<arr[i];
            ss>>ll;
            if(ll%(2<<(q-1))==0 && track!=ll){
                printf(" %lld",ll);
                flag=1;
                break;
            }
        }
        if(flag==0) printf(" impossible");
        printf("\n");
    }
    return 0;
}
