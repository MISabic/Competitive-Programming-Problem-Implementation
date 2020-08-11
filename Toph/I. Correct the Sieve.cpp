#include <cstdio>
#include<cmath>

int isPrime[ 1000100 ] ;
void sieve() {
    isPrime[1]=1;
	for( int i = 4 ; i <= 1000000 ; i +=2 ) {
		isPrime[ i ] = 1 ;
	}
	int sqrtn=(int)sqrt(1000100);
	for( int i = 3 ; i <= sqrtn ; i +=2 ) {
        if(isPrime[i]==0){
            for( int j = i * i ; j <= 1000000 ; j += i ) {
                isPrime[ j ] = 1 ;
            }
        }
	}
}
int main() {
	sieve() ;
	int N ;
	scanf("%d",&N) ;
	int num ;
	for( int i = 0 ; i < N ; i ++ ) {
		scanf("%d",&num) ;
		if( isPrime[ num ] == 0 ) {
			printf("%d is a prime number.\n",num);
		}
		else {
			printf("%d is not a prime number.\n",num);
		}
	}
	return 0 ;
}
