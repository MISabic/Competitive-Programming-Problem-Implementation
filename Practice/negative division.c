#include<stdio.h>

int mod(int x, int m) {
    return (x%m + m)%m;
}
//Of course, if you're bothered about having two calls to the modulus operation, you could write it as

int mod(int x, int m) {
    int r = x%m;
    return r<0 ? r+m : r;
}

int main()
{

}
/**The reason it works is that "x%m" is always in the range [-m+1, m-1].
*  So if at all it is negative, adding  m to it will put it in the
*  positive range without changing its value modulo m.
*/
