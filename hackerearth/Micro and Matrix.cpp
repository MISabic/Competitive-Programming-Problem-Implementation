#include<bits/stdc++.h>
using namespace std;

int t,n,arr[1005][1005];

void printMaxSubSquare()
{
    int S[n+5][n+5],mx=1;

    for(int i = 0; i < n; i++)
        S[i][0] = S[0][i] = 1;

    for(int i=1; i<n; i++)
    {
        for(int j=1; j<n; j++)
        {
            if(arr[i][j] == arr[i-1][j] && arr[i-1][j] == arr[i][j-1] && arr[i][j] == arr[i-1][j-1])
                S[i][j] = min(S[i][j-1], min(S[i-1][j], S[i-1][j-1])) + 1;
            else
                S[i][j] = 1;
            mx=max(mx,S[i][j]);
        }
    }
    printf("%d\n",mx);
}

int main()
{
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                scanf("%d",&arr[i][j]);
            }
        }
        printMaxSubSquare();
    }
    return 0;
}
