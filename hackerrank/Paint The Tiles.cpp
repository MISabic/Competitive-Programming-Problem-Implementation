#include <stdio.h>
#include <string.h>

int main(void) {
	int n,p,i,count;
	char arr[1050];
	while(scanf("%d",&n)==1)
	{
	    count=1;
	    scanf("%s",arr);
	    arr[n]=arr[n-1];
	    for(i=0; i<n; i++){
            if(arr[i]!=arr[i+1])
                ++count;
	    }
        printf("%d\n",count);
	}
	return 0;
}
