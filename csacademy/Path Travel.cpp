#include<bits/stdc++.h>
using namespace std;

#define MAX 999999999999999LL

long long red[100010],blue[100010];

long long minValue(long long toSearch, long long sz, long long *arr)
{
    long long index,start,last,mid;
    if(toSearch<=arr[0])
        return -1;
    else{
        start=0, last=sz;
        while(start<=last){
            mid=(start+last)/2LL;       //cout<<mid<<"     "<<arr[mid]<<"     "<<arr[mid+1]<<endl;
            if(arr[mid]<toSearch && arr[mid+1]>=toSearch)
                break;
            if(arr[mid]>=toSearch)
                last=mid;
            else if(arr[mid]<toSearch && arr[mid+1]<=toSearch)
                start=mid;
        }
        index=mid;
    }
    return arr[index];
}

long long maxValue(long long toSearch, long long sz, long long *arr)
{
    long long index,start,last,mid;
    if(toSearch>=arr[sz-1])
        return -1;
    else{
        start=0, last=sz;
        while(start<=last){
            mid=(start+last)/2LL;       //cout<<mid<<"     "<<arr[mid]<<"     "<<arr[mid+1]<<endl;
            if(arr[mid]>toSearch && arr[mid-1]<=toSearch)
                break;
            if(arr[mid]<=toSearch)
                start=mid;
            else if(arr[mid]>toSearch && arr[mid-1]>=toSearch)
                last=mid;
        }
        index=mid;
    }
    return arr[index];
}

int main()
{
    int n,r,b;
    while(cin>>n>>r>>b){
        for(int i=0; i<r; i++)
            cin>>red[i];

        for(int i=0; i<b; i++)
            cin>>blue[i];

        sort(blue,blue+b);

        blue[b]=MAX;

        int total=0;
        for(int i=0; i<r; i++){
            if(binary_search(blue,blue+b,red[i])==true) continue;

            long long k1=maxValue(red[i],b,blue);
            long long k2=minValue(red[i],b,blue);

            if(k1!=-1 && k2!=-1) total+=min(abs(k1-red[i]),abs(k2-red[i]));
            else if(k1==-1) total+=abs(k2-red[i]);
            else if(k2==-1) total+=abs(k1-red[i]);

        }
        cout<<total<<endl;
    }
    return 0;
}
