/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[4]={10, 670, 55252, 4816030};
    while(scanf("%d",&n)==1)
        cout<<arr[n/2-1]<<endl;
    return 0;
}*/


/*
#include<bits/stdc++.h>
using namespace std;

int sum1=0,sum2=0;

int dig(int n,int k)
{
    int p=k=k/2;
    while(k--)
    {
        sum1+=n%10;
        n/=10;
    }
    while(p--)
    {
        sum2+=n%10;
        n/=10;
    }
}

int main()
{
    int c=0;
    for(int i=1; i<=99999999; i++){
        sum1=sum2=0;
        dig(i,4);
        if(sum1==sum2) ++c;
    }
    cout<<c<<endl;
    return 0;
}*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N , sums[100] , end , t , t2 , cursum , total;
    while(scanf("%d" , &N)==1)
    {
        total=0;
        for(t = 0 ; t <= 36 ; t++)
            sums[t] = 0;
        end = powl(10 , N / 2);
        for(t = 0 ; t < end ; t++)
        {
            cursum = 0;
            t2 = t;
            while(t2 > 0)
            {
                cursum += t2 % 10;
                t2 /= 10;
            }
            cout<<cursum<<endl;
            sums[cursum]++;
        }
        for(t = 0 ; t <= 36 ; t++)
            total += sums[t] * sums[t];
        printf("%d" , total);
    }
}

