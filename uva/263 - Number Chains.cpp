#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include <functional>

using namespace std;

void reverse(char str[], int length)
{
    int start = 0;
    int end = length -1;
    while (start < end){
        swap(*(str+start), *(str+end));
        start++;
        end--;
    }
}

char* itoa(int num, char* str, int base)
{
    int i = 0;
    bool isNegative = false;
    if (num == 0){
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }
    if (num < 0 && base == 10){
        isNegative = true;
        num = -num;
    }
    while (num != 0){
        int rem = num % base;
        str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
        num = num/base;
    }
    if (isNegative)
        str[i++] = '-';
    str[i] = '\0';
    reverse(str, i);
    return str;
}

int main()
{
    char arr[15];
    int n,len,k1,k2,k3,count,i,j,flag,brr[1000];
    while(scanf("%s",arr)==1 && arr[0]!='0'){
        printf("Original number was %s\n",arr);
        count=0,flag=i=0;
        while(1){
            ++count;
            len=strlen(arr);
            sort(arr,arr+len);
            k1=atol(arr);
            sort(arr,arr+len,greater<char>());
            k2=atol(arr);
            brr[i++]=k3=k2-k1;
            printf("%d - %d = %d\n",k2,k1,k3);
            itoa(k3,arr,10);
            for(j=0; j<i-1; j++){
                if(brr[j]==k3){
                    flag=1;
                    break;
                }
            }
            if(flag==1) break;
        }
        printf("Chain length %d\n\n",count);
    }
    return 0;
}
