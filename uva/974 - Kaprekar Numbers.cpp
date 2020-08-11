#include<cstdio>

int main()
{
    int t,a,b,c=0,arr[25]={9,45,55,99,297,703,999,2223,2728,4879,4950,5050,5292,7272,7777,9999,17344,22222,38962};
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        printf("case #%d\n",++c);
        int flag=0;
        for(int i=0; i<19; i++){
            if(arr[i]<=b && arr[i]>=a){
                printf("%d\n",arr[i]);
                flag=1;
            }
        }
        if(flag==0) printf("no kaprekar numbers\n");
        if(t!=0) printf("\n");
    }
    return 0;
}


//without preprocessing

/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c=0;
    cin>>t;
    while(t--){
        scanf("%d %d",&a,&b);
        printf("case #%d\n",++c);
        vector<int>vec;
        for(int i=a; i<=b; i++){
            int len=log10(i*i)+1;
            char num[100],num2[100];
            string str;
            stringstream ss;
            ss<<i*i;
            ss>>num;
            int k=len-1,x,y;
            while(k>0){
                strcpy(num2,num);
                num2[k]='\0';
                ss.clear();
                ss<<num2;
                ss>>x;
                ss.clear();
                ss<<&num[k];
                ss>>y;
                --k;
                if(x>0 && y>0 && x+y==i){
                    vec.push_back(i);
                    break;
                }
            }
        }
        if(vec.size()!=0){
            for(int i=0; i<vec.size(); i++)
                printf("%d\n",vec[i]);
        }
        else printf("no kaprekar numbers\n");
        if(t!=0) printf("\n");
    }
    return 0;
}*/


//preprocessed

/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c=0;
    vector<int>vec;
    for(int i=2; i<=40500; i++){
        int len=log10(i*i)+1;
        char num[100],num2[100];
        string str;
        stringstream ss;
        ss<<i*i;
        ss>>num;
        int k=len-1,x,y;
        while(k>0){
            strcpy(num2,num);
            num2[k]='\0';
            ss.clear();
            ss<<num2;
            ss>>x;
            ss.clear();
            ss<<&num[k];
            ss>>y;
            --k;
            if(x>0 && y>0 && x+y==i){
                vec.push_back(i);
                break;
            }
        }
    }
    cin>>t;
    while(t--){
        scanf("%d %d",&a,&b);
        printf("case #%d\n",++c);
        int flag=0;
        for(int i=0; i<vec.size(); i++){
            if(vec[i]<=b && vec[i]>=a){
                printf("%d\n",vec[i]);
                flag=1;
            }
        }
        if(flag==0) printf("no kaprekar numbers\n");
        if(t!=0) printf("\n");
    }
    return 0;
}*/

