#include<bits/stdc++.h>
using namespace std;

int power(int n,int p)
{
    int mul=n;
    if(p==0) return 1;
    if(n==0) return 0;
    for(int i=1; i<p; i++){
        mul=mul*n;
    }
    return mul;
}

int main()
{
    int t,u,v,res,f=0;
    char arr[1000000];
    cin>>t;
    while(t--){
        if(f==0){
            getc(stdin);
            f=1;
        }
        gets(arr);
        int len=strlen(arr);
        stringstream ss;
        ss<<arr;
        ss>>u;
        int k1;
        if(u==0) k1=1;
        else k1=(int)log10(u)+1;
        char brr[1000];
        stringstream sb;
        sb<< &arr[k1+3];
        sb>>v;
        int k2;
        if(v==0) k2=1;
        else k2=(int)log10(v)+1;
        stringstream sr;
        sr<< &arr[k1+k2+6];
        sr>>res;
        int k4,i;
        if(res==0) k4=1;
        else k4=(int)log10(res)+1;
        int flag=0;
        for(int i=0; i<len; i++){
            if(isdigit(arr[i]) && arr[i]!='1')
                flag=1;
        }
        if(flag==0 && ((int)log10(u)+1)+((int)log10(v)+1)==((int)log10(res)+1)){
            printf("1\n");
            continue;
        }
        flag=0;
        for(i=2; i<=25; i++){
            if(i<10){
                int test=0;
                for(int l=0; l<len; l++){
                    if(isdigit(arr[l])){
                        int fin=arr[l]-'0';
                        if(fin>=i){
                            test=1;
                            break;
                        }
                    }
                }
                if(test==1) continue;
            }
            int w=0,use1=u,use2=v,sum1=0,sum2=0,sum3=0,p;
            for(int j=k1-1; j>=0; j--){
                p=(arr[j]-'0');
                sum1+=p*power(i,w);
                w++;
            }
            w=0;
            for(int j=k1+3+k2-1; j>=0 && arr[j]!=' '; j--){
                p=(arr[j]-'0');
                sum2+=p*power(i,w);
                w++;
            }
            w=0;
            for(int j=len-1; j>=len-k4; j--){
                p=(arr[j]-'0');
                sum3+=p*power(i,w);
                w++;
            }
            if(sum1+sum2==sum3){
                flag=1;
                break;
            }
        }
        if(flag==1){
            printf("%d\n",i);
        }
        else{
            printf("0\n");
        }
    }
    return 0;
}
