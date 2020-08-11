#include<stdio.h>
#include<string.h>

long long arr[11];

long long pali(long long n)
{
    long long i;
    while(n!=0){
        i=n%10;
        arr[i]=i;
        n=n/10;
    }
}

int main()
{
    long long t,n,i,c=0,j,k,flag,p;
    scanf("%lld",&t);
    while(t--){
        memset(arr,-1,sizeof(arr));
        j=1;
        scanf("%lld",&n);
        if(n==0){
            printf("Case #%lld: INSOMNIA\n",++c);
            continue;
        }

        for(i=n; ;i=n*j){
            pali(i);
            ++j;
            flag=0;
            for(k=0; k<10; k++){
                if(arr[k]==-1){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                printf("Case #%lld: %lld\n",++c,i);
                break;
            }
        }
    }
    return 0;
}


/*
#include<stdio.h>
#include<string.h>

long long arr[11];

long long pali(long long n)
{
    long long i;
    while(n!=0){
        i=n%10;
        arr[i]=i;
        n=n/10;
    }
}

int main()
{
    long long t,n,i=0,c=0,j,k,flag,p;
    FILE *fptr,*fptr1;
    fptr=fopen("A-large.in","r");
    fptr1=fopen("A-large.txt","w");
    fscanf(fptr, "%lld", &t);
    while(t--){
        memset(arr,-1,sizeof(arr));
        j=1;
        fscanf(fptr, "%lld", &n);
        if(n==0){
            fprintf(fptr1,"Case #%lld: INSOMNIA\n",++c);
            continue;
        }

        for(i=n; ;i=n*j){
            pali(i);
            ++j;
            flag=0;
            for(k=0; k<10; k++){
                if(arr[k]==-1){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                fprintf(fptr1,"Case #%lld: %lld\n",++c,i);
                break;
            }
        }
    }
    fclose(fptr);
    fclose(fptr1);
    return 0;
}
*/
