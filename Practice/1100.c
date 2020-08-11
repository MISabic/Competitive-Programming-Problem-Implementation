#include <stdio.h>

int main()
{
   int i,j,naruto=0,sasuke=0,lee=0,boom;
   char str1[1000];
   gets(str1);
   boom=strlen(str1);

   for(i=0; i<boom; i++)
        if(str1[i]=='1')
            naruto++;
        else if(str1[i]=='0')
            sasuke++;

   for(i=0; i<boom; i++)
        if(str1[i]=='0' && str1[i+1]=='1' || str1[i]=='1' && str1[i+1]=='0')
            lee++;

   if(naruto==sasuke && lee<2)
        printf("accomplished");
   else
        printf("busted");
}
