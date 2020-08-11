#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int w,s,x,y;
	while(scanf("%d %d %d %d",&w,&s,&x,&y)==4){
        int arr[w][x];
        for (int i=0; i<w; i++){
            for (int j=0; j<x; j++){
                scanf("%d",&arr[i][j]);
            }
        }
        int brr[s][x];
        for (int i=0; i<s; i++){
            for (int j=0; j<x; j++){
                scanf("%d",&brr[i][j]);
            }
        }
        for (int i=1; i<s; i++){
            for (int j=0; j<x; j++){
                brr[0][j]=max(brr[0][j],brr[i][j]);
            }
        }
        for (int i=0; i<w; i++){
            for (int j=0; j<x; j++){
                int k=min(arr[i][j],y-brr[0][j]);
                printf("%d ",k);
            }
            printf("\n");
        }
	}
	return 0;
}

