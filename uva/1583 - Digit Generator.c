/*#include<stdio.h>

int main()
{
    int n,i,j,k=0,rem,quo,total=0,t,count=0;
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d",&n);
        if(n>=1 && n<=100000)
        {
            for(i=n/2; i<n; i++)
            {
                ++count;
                j=i;
                while(j!=0)
                {
                    rem=j%10;
                    j=j/10;
                    total+=rem;
                }
                if(total+i==n)
                {
                    printf("%d\n",i);
                    break;
                }
                else
                    ++k;
                total=0;
            }
            if(count==k)
                printf("0\n");
            count=total=k=0;
        }
        else
            return 0;
        --t;
    }
    return 0;
}*/

//#include<bits/stdc++.h>

using namespace std;

int res[100000]={0};
int main()
{
    for(int i=1; i<=100000; i++)
    {
        int num = i + (i/10000) + (i/1000)%10 + (i/100)%10 + (i/10)%10 + i%10;
        if(res[num]==0 || i<res[num])
            res[num] = i;
    }
    int n, m;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>m;
        cout<<res[m]<<endl;
    }
    return 0;
}
