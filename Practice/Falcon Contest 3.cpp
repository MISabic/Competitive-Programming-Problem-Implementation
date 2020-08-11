/*
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctype.h>
#include<cmath>
#include<assert.h>

#define pf printf
#define sf scanf
#define ll long long int
#define epsilon 0.000000001
#define pi acos(-1)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
#define fequal(a,b) fabs(a-b)<epsilon
#define lcm(a,b) (a*b)/gcd(a,b)

int intSort(const int *a, const int *b)
{
    return (*a-*b);
}

int main()
{
     int arr[1005],m,n,a,b,c,d,e,f,g,h,i,j,brr[12],count;
     for(m=0; m<=1002; m++)
        arr[m]=m%42;
     while(sf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j)==10)
     {
         count=0;
         brr[0]=arr[a],brr[1]=arr[b],brr[2]=arr[c],brr[3]=arr[d],brr[4]=arr[e],brr[5]=arr[f],brr[6]=arr[g],brr[7]=arr[h],
         brr[8]=arr[i],brr[9]=arr[j];
         qsort(brr, 10, sizeof(int), (int (*)(const void*, const void*))intSort);
         brr[10]=-1;
         for(m=0; m<10; m++)
         {
             if(brr[m]!=brr[m+1])
                ++count;
         }
         pf("%d\n",count);
     }
     return 0;
}*/

/*
#include<cstdio>

int main()
{
     int n1,s;
     while(scanf("%d %d",&n1,&s)==2)
         printf("%d\n",(s*2)-n1);
     return 0;
}
*/

/*
#include<cstdio>
#include<cstdlib>

int intSort(const int *a, const int *b)
{
    return (*a-*b);
}
int main()
{
     int arr[5],i;
     char brr[5];
     while(scanf("%d %d %d",&arr[0],&arr[1],&arr[2])==3)
     {
         qsort(arr, 3, sizeof(int), (int (*)(const void*, const void*))intSort);
         scanf("%s",brr);
         for(i=0; i<3; i++)
         {
             if(brr[i]=='A')
                printf("%d",arr[0]);
             else if(brr[i]=='B')
                printf("%d",arr[1]);
             else
                printf("%d",arr[2]);
             if(i!=2)
                printf(" ");
         }
         printf("\n");
     }
     return 0;
}
*/

/*
#include<cstdio>

int main()
{
     int arr[15],k,n,i,j,p,n1,n2;
     while(scanf("%d %d %d %d %d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5],&arr[6],&arr[7],&arr[8])==9)
     {
         k=n=0;
         for(i=0; i<9; i++)
            k+=arr[i];
         for(i=8; i>=0; i--)
         {
             n=k-arr[i];
             n1=i;
             for(j=0; j<9 && j!=i; j++)
             {
                 p=n-arr[j];
                 n2=j;
                 if(p==100)
                    break;
             }
             if(p==100)
                break;
         }
         for(i=0; i<9; i++)
         {
             if(i!=n1 && i!=n2)
                printf("%d\n",arr[i]);
         }
     }
     return 0;
}
*/

/*
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    char arr[5][5];
    int i,j,count=0,flag;
    for( int r = 0; r < 4; ++r )
        scanf( "%s", arr[r] );
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(arr[i][j]=='A'){
                count+=abs(i-0)+abs(j-0);
            }
            else if(arr[i][j]=='B'){
                count+=abs(i-0)+abs(j-1);
            }
            else if(arr[i][j]=='C'){
                count+=abs(i-0)+abs(j-2);
            }
            else if(arr[i][j]=='D'){
                count+=abs(i-0)+abs(j-3);
            }
            else if(arr[i][j]=='E'){
                count+=abs(i-1)+abs(j-0);
            }
            else if(arr[i][j]=='F'){
                count+=abs(i-1)+abs(j-1);
            }
            else if(arr[i][j]=='G'){
                count+=abs(i-1)+abs(j-2);
             }
            else if(arr[i][j]=='H'){
                count+=abs(i-1)+abs(j-3);
            }
            else if(arr[i][j]=='I'){
                count+=abs(i-2)+abs(j-0);
            }
            else if(arr[i][j]=='J'){
                count+=abs(i-2)+abs(j-1);
            }
            else if(arr[i][j]=='K'){
                count+=abs(i-2)+abs(j-2);
            }
            else if(arr[i][j]=='L'){
                count+=abs(i-2)+abs(j-3);
            }
            else if(arr[i][j]=='M'){
                count+=abs(i-3)+abs(j-0);
            }
            else if(arr[i][j]=='N'){
                count+=abs(i-3)+abs(j-1);
            }
            else if(arr[i][j]=='O'){
                count+=abs(i-3)+abs(j-2);
            }
            else if(arr[i][j]=='.')
                ;
        }
    }
    printf("%d\n",count);
    return 0;
}*/

/*
#include<stdio.h>
#include<math.h>

int main()
{
    int n,w,h,k,i,arr[60];
    double s;
    while(scanf("%d %d %d",&n,&w,&h)==3)
    {
        s=sqrt(w*w+h*h);
        k=(int)s;
        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);
        for(i=0; i<n; i++)
        {
            if(arr[i]<=w || arr[i]<=h || arr[i]<=k)
                printf("DA\n");
            else
                printf("NE\n");
        }
    }
    return 0;
}*/

/*#include<cstdio>
#include<cmath>
#define pi acos(-1)

int main()
{
    double a,b;
    while(scanf("%lf",&a)==1)
    {
        b=pi*a*a;
        printf("%f\n%f\n",b,a*a*2);
    }
    return 0;
}*/
/*
#include<cstdio>
#include<cstring>
#include<algorithm>

int main()
{
    char arr[60];
    int len,i,c[5]={0},flag;
    while(scanf("%s",arr)==1)
    {
        c[0]=1,c[1]=0,c[2]=0;
        len=strlen(arr);
        for(i=0; i<len; i++)
        {
            if(arr[i]=='A')
               std::swap(c[0],c[1]);
            else if(arr[i]=='B')
               std::swap(c[1],c[2]);
            else if(arr[i]=='C')
               std::swap(c[0],c[2]);
        }
        for(i=0; i<3; i++)
            if(c[i]==1)
                printf("%d\n",i+1);
    }
    return 0;
}
*/
/*
#include<cstdio>
#include<cstring>
#include<algorithm>

int main()
{
    int h1,m1,s1,h2,m2,s2,k1,k2,keep,a,b,c;
    while(scanf("%d:%d:%d",&h1,&m1,&s1)==3)
    {
        k1=(h1*60*60)+(m1*60)+s1;
        scanf("%d:%d:%d",&h2,&m2,&s2);
        k2=(h2*60*60)+(m2*60)+s2;
        if(h1==h2 && m1==m2 && s1==s2){
            printf("24:00:00\n");
            continue;
        }
        if(k2<k1)
            k2+=86400;
        keep=k2-k1;
        a=keep%60;
        b=(keep/60)%60;
        c=(keep/(60*60))%24;
        printf("%02d:%02d:%02d\n",c,b,a);
    }
    return 0;
}
*/
/*
#include<cstdio>
#include<cstring>
#include<algorithm>

int main()
{
    int n,i,j,k,found,warn,flag;
    char arr[150][25];
    while(scanf("%d",&n)==1)
    {
        warn=flag=0;
        for(i=0; i<n; i++)
        {
            scanf("%s",&arr[i]);
        }
        for(i=0; i<n; i++)
        {
            k=found=0;
            for(j=i-1; j>=0; j--)
            {
                if(strcmp(arr[i],arr[j])==0)
                    ++k;
                else
                    ++found;
            }
            if(k>found)
                ++warn;
        }
        printf("%d\n",warn);
    }
    return 0;
}
*/
/*
#include<cstdio>
#include<cstring>
#include<algorithm>

int main()
{
    int i,j,a,b,c,d,m,n,o,p;
    char arr[60][60],brr[300][300];
    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4)
    {
        for(i=0; i<a; i++)
            for(j=0; j<b; j++)
                scanf(" %c",&arr[i][j]);
        m=n=c;
        o=p=d;
        for(i=0; i<a; i++)
        {
            while(m--)
            {
                for(j=0; j<b; j++)
                {
                    while(o--)
                        printf("%c",arr[i][j]);
                    o=p;
                }
                printf("\n");
            }
            m=n;
        }
    }
    return 0;
}
*/



#include<cstdio>
#include<cstring>
#include<algorithm>

int main()
{
    int i,j,k,l,a,b,c,d,m,n,h;
    char arr[120][120],brr[120][120];
    while(scanf("%d %d",&a,&b)==2)
    {
        for(i=0; i<a; i++)
        {
            for(j=0; j<b; j++)
            {
                scanf(" %c",&arr[i][j]);
            }
            m=b;
            while(m<b*2)
            {
                arr[i][m++]=arr[i][--j];
            }
        }
        m=a,n=0;
        for(i=a-1; i>=0; i--)
        {
            for(j=0; j<b*2; j++)
            {
                arr[m][n++]=arr[i][j];
            }
            ++m,n=0;
        }
        scanf("%d %d",&c,&d);

        h=abs(a*2-c);
        if(arr[h][d-1]=='#')
            arr[c-1][d-1]='.';
        else
            arr[c-1][d-1]='#';
        for(i=0; i<a*2; i++)
        {
            for(j=0; j<b*2; j++)
            {
                printf("%c",arr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}



