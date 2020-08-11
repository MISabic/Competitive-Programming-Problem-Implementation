//%a  /* Abbreviated weekday */
//%A  /* Full weekday */
//%b  /* Abbreviated month */
//%b  /* Full month */
//%c  /* Full date and time */
//%d  /* Day of the month (1-31) */
//%H  /* Hour (24 hour clock) */
//%I  /* Hour (12 hour clock) */
//%j  /* Day of the year (1-366)*/
//%m  /* Month (1-12) */
//%M  /* Minute (0-59) */
//%p  /* AM/PM for 12 hour clock */
//%S  /* Second (0-60) */
//%U  /* Week number from Sunday */
//%w  /* Weekday (0-6) from Sunday */
//%W  /* Week number from Monday */
//%x  /* Full date */
//%X  /* Full time of day */
//%y  /* Year without century */
//%Y  /* Year with century */
//%Z  /* Time zone */
//%%  /* Print a % character */
#include <stdio.h>
#include <time.h>

int main ( void )
{
  time_t now;
  struct tm *tm_now;
  char buff[BUFSIZ];

  now = time ( NULL );
  tm_now = localtime ( &now );

  strftime ( buff, sizeof buff, "%A, %c %p", tm_now );
  //printf ( "%d\n", tm_now->tm_hour);
  printf ( "%s\n", buff );

  return 0;
}

