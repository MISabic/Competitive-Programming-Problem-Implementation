/*#include<stdio.h>

int main()
{
    double d,total=0;
    int t=12;
    while(t--){
        scanf("%lf",&d);
        total+=d;
    }
    printf("$%.2f\n",total/12.0);
    return 0;
}*/

/*
#include<stdio.h>
#include<string.h>

int main()
{
    int arr[100],brr[100],n,i,j=0,count;
    while(1){
        memset(arr,0,sizeof arr);
        memset(brr,0,sizeof brr);
        count=j=0;
        while(scanf("%d",&n)==1){
            if(n==0 || n==-1) break;
            arr[n]=n,brr[j++]=n;
        }
        if(n==-1) break;
        for(i=0; i<j; i++)
            if(brr[i]%2==0 && arr[brr[i]/2]!=0) ++count;
        printf("%d\n",count);
    }
    return 0;
}
*/

/*
#include<stdio.h>

int main()
{
    int n,i,v,t,k,s;
    while(scanf("%d",&n)==1 && n!=-1){
        s=k=0;
        for(i=0; i<n; i++){
            scanf("%d %d",&v,&t);
            s+=v*(t-k);
            k=t;
        }
        printf("%d miles\n",s);
    }
    return 0;
}*/

/*
#include<stdio.h>

int main()
{
    double n,i;
    int count;
    while(scanf("%lf",&n)==1 && n!=0.00){
        count=0;
        for(i=2; ;i++){
            count++;
            if(n>=(1/i)) n-=(1/i);
            else break;
        }
        printf("%d card(s)\n",count);
    }
    return 0;
}*/


/*
#include<stdio.h>
#include<string.h>

int main()
{
    int i,num[10050],sum,j;
    memset(num,0,sizeof num);
    for(i=1; i<9999; i++){
        sum=i;
        j=i;
        while(j!=0){
            sum+=j%10;
            j/=10;
        }
        num[sum]=1;
    }
    for(i=1; i<9999; i++)
        if(num[i]==0) printf("%d\n",i);
    return 0;
}*/

/*
#include<stdio.h>
#include<string.h>

int main()
{
    int arr[10000],pri[1250],n,i,j,k=0,c,count;
    memset(arr,0,sizeof arr);
    pri[0]=2;
    for(i=3; i<=100; i+=2)
        if(arr[i]==0){
            pri[++k]=i;
            for(j=i*i; j<=10000; j+=i+i)
                arr[j]=1;
        }
    for(i=99; i<10000; i+=2)
        if(arr[i]==0)
            pri[++k]=i;
    while(scanf("%d",&n)==1 && n!=0){
        count=0;
        for(i=0; i<=k; i++){
            c=0;
            if(pri[i]>n) break;
            for(j=i; j<=k; j++){
                c=c+pri[j];
                if(c==n){
                    ++count;
                    break;
                }
                else if(c>n) break;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
*/

/*
#include<stdio.h>
#include<math.h>
#define pi acos(-1)

int main()
{
    int n,res,c=0;
    double x,y,k;
    scanf("%d",&n);
    while(n--){
        scanf("%lf %lf",&x,&y);
        k=(pi*(x*x+y*y))/2;
        res=ceil(k/50);
        printf("Property %d: This property will begin eroding in year %d.\n",++c,res);
    }
    printf("END OF OUTPUT.\n");
    return 0;
}
*/


/*
#include<stdio.h>

int main()
{
    int n,i,c=0;
    char arr[16][30];
    while(scanf("%d",&n)==1 && n!=0){
        for(i=0; i<n; i++)
            scanf("%s",&arr[i]);
        printf("SET %d\n",++c);
        for(i=0; i<n; i+=2)
            printf("%s\n",arr[i]);
        (n%2==0) ? (i=n-1) : (i=n-2);
        for(i; i>=0; i-=2)
            printf("%s\n",arr[i]);
    }
    return 0;
}
*/


/*
#include<stdio.h>
#include<math.h>

typedef struct{
    double a,b;
}stu;
stu arr[10010];

int main()
{
    int n,i;
    double k,min;
    while(scanf("%d",&n)==1 && n!=0){
        for(i=0; i<n; i++){
            scanf("%lf%lf",&arr[i].a,&arr[i].b);
            if(arr[i].b<0) --i,--n;
        }
        min=1e100;
        for(i=0; i<n; i++){
            k=ceil((4.5*3600)/arr[i].a+arr[i].b);
            if(k<min) min=k;
        }
        printf("%.0f\n",min);
    }
    return 0;
}
*/

/*
#include<stdio.h>
#include<string.h>

char arr[22][22];

void check(int i, int j)
{
    if(arr[i+1][j]=='.'){
        arr[i][j]=arr[i+1][j]='*';
        check(i+1,j);
    }
    if(arr[i][j+1]=='.'){
        arr[i][j]=arr[i][j+1]='*';
        check(i,j+1);
    }
    if(arr[i-1][j]=='.'){
        arr[i][j]=arr[i-1][j]='*';
        check(i-1,j);
    }
    if(arr[i][j-1]=='.'){
        arr[i][j]=arr[i][j-1]='*';
        check(i,j-1);
    }
}

int main()
{
    int i,j,x,y,count;
    while(scanf("%d %d",&x,&y)==2 && x!=0 && y!=0){
        count=0;
        memset(arr,'#',sizeof arr);
        for(i=1; i<=y; i++){
            scanf("%s",&arr[i][1]);
            arr[i][x+1]='#';
        }
        for(i=1; i<=y; i++){
            for(j=1; j<=x; j++){
                if(arr[i][j]=='@') break;
            }
            if(arr[i][j]=='@') break;
        }
        if(arr[i][j]=='@' && arr[i+1][j]=='#' && arr[i][j+1]=='#' && arr[i-1][j]=='#' && arr[i][j-1]=='#'){
            printf("1\n");
            continue;
        }
        check(i,j);
        for(i=0; i<=y+1; i++)
            for(j=0; j<=x+1; j++)
                if(arr[i][j]=='*')
                    ++count;
        printf("%d\n",count);
    }
    return 0;
}
*/


/*#include<stdio.h>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    double a,b,e,h,humidex,temp;
    char ch,ph;
    while(scanf("%c",&ch)==1){
        if(ch=='E') break;
        scanf("%lf %c %lf",&a,&ph,&b);
        if((ch=='T' && ph=='D') || (ch=='D' && ph=='T')){
            if(ch=='D' && ph=='T'){
                swap(a,b);
            }
            e=6.11 * exp (5417.7530 * ((1/273.16) - (1/(b+273.16))));
            h=(0.5555)*(e-10.0);
            humidex = a + h;
            printf("T %.1f D %.1f H %.1f\n",a,b,humidex);
        }
        else if((ch=='H' && ph=='D') || (ch=='D' && ph=='H')){
            if(ch=='D' && ph=='H'){
                swap(a,b);
            }
            e=6.11 * exp (5417.7530 * ((1/273.16) - (1/(b+273.16))));
            h=(0.5555)*(e-10.0);
            temp = a - h;
            printf("T %.1f D %.1f H %.1f\n",temp,b,a);
        }
        else if((ch=='T' && ph=='H') || (ch=='H' && ph=='T')){
            if(ch=='T' && ph=='H'){
                swap(a,b);
            }
            h=a-b;
            e=((-1)/(((log(((h/0.5555)+10)/6.11))/5417.7530)-(1.0/273.16)))-273.16;
            printf("T %.1f D %.1f H %.1f\n",b,e,a);
        }
        getc(stdin);
    }
    return 0;
}*/

#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;
int main()
{
    int n,i,sum,arr[70],brr[70],flag,plug,j,total,k;
    while(scanf("%d",&n)==1){
        sum=0;
        for(i=0; i<n; i++){
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        sort(arr,arr+n);//printf("%d\n",arr[n-1]);
        for(k=arr[n-1]; k<=sum; k++){
            i=0,j=n-1,total=flag=0;
            memcpy(brr,arr,sizeof arr);
            while(i<=j){
                if(flag==0){
                    if(total+=brr[j]>k){
                        flag=1;
                    }
                    else{
                        total+=brr[j];
                        flag=1;printf("++%d %d %d %d\n",k,total,i,j);
                        if(total>k) break;
                        if(i==j){
                            if(total==k){
                                brr[j]=0;
                                break;
                            }
                            else break;
                        }
                        if(total<=k){
                            brr[j]=0;
                            --j;
                        }
                        if(total==k){
                            total=0;
                            flag=0;
                        }
                    }
                }
                else{
                    total+=brr[i];
                    //++i;
                    flag=0;
                    if(total>k) break;
                    /*if(total<k){
                        --i;
                    }*/printf("--%d %d %d %d\n",k,total,i,j);
                    if(i==j){
                        if(total==k){
                            brr[i]=0;
                            break;
                        }
                        else break;
                    }
                    if(total<=k){
                        brr[i]=0;
                        ++i;
                    }
                    if(total==k){
                        total=0;
                        flag=0;
                    }
                }
            }
            plug=0;
            for(int l=0; l<n; l++){
                if(brr[l]!=0){printf("%d\n",brr[l]);
                    plug=1;
                    break;
                }
            }
            if(plug==0) break;
        }
        printf("%d\n",k);
        /*for(i=0; i<n; i++){
            printf("%d\n",arr[i]);
        }*/
    }
    return 0;
}


