/*#include<stdio.h>
 void search(int arr[],int size,int key);
int main()
{
    int n,i,k;
    printf("enter the array size:");
    scanf("%d",&n);
    int cha[n];
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&cha[i]);
    printf("search key :\n");
    scanf("%d",&k);
    search(cha,n,k);
}
   void search(int arr[],int size,int key)
{

 int i,total=0;
 for(i=0;i<size;i++)

 {
    if(arr[i]==key)
        total++;
}
printf("search key appears %d times",total);
}
*/


#include<stdio.h>
int main()
{
   int i,j,temp,arr[5];
   printf("enter array elements:\n");
   for(i=0;i<5;i++)
scanf("%d",&arr[i]);
int max=arr[0];
   for(i=0;i<5;i++)
   {
   //    for(j=0;j<5;j++)
        if(arr[i]>max)
       {
         max=arr[i];
       }
   }
   printf("%d",max);
}
