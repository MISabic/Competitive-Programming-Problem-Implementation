#include<stdio.h>

int main()
{
    int n,i,j,ind1,ind2,sum1,sum2,count,found,arr[100][100],brr[101],crr[101];
    while(scanf("%d",&n)==1 && n!=0){
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                scanf(" %d",&arr[i][j]);
            }
        }
        for(i=0; i<n; i++){
            sum1=sum2=0;
            for(j=0; j<n; j++){
                sum1+=arr[i][j];
                sum2+=arr[j][i];
            }
            brr[i]=sum1,crr[i]=sum2;
        }
        count=found=0;
        for(i=0; i<n; i++){
            if(brr[i]%2!=0){
                ind1=i;
                ++count;
            }
            if(crr[i]%2!=0){
                ind2=i;
                ++found;
            }
        }
        if(count==0 && found==0) printf("OK\n");
        else if(count>1 || found>1) printf("Corrupt\n");
        else if(count==1 && found==1){
            for(i=0; i<n; i++){
                if(brr[i]%2!=0) ind1=i;
                if(crr[i]%2!=0) ind2=i;
            }
            printf("Change bit (%d,%d)\n",ind1+1,ind2+1);
        }
    }
    return 0;
}

