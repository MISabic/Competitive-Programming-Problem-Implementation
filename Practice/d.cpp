#include<stdio.h>
 
main()
{
      int n, c, d, num = 1, space;
 
      scanf("%d",&n);
 
      for ( d = 1 ; d <= n ; d++ )
      {
          num = d;
 
          for ( c = 1 ; c <= n-d ; c++ )
              printf(" ");
 
            for ( c = 1 ; c <= d ; c++ )
          {
              printf("%d", num);
              num++;
          }
          num--;
          num--;
          for ( c = 1 ; c < d ; c++)
          {
              printf("%d", num);
              num--;
          }
          printf("\n");
 
      }
 
      return 0;
}
