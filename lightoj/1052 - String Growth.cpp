/**
    Recurrence: f(n+1) = f(n) + f(n-1)
    Given: f(0) = a, f(1) = b
    Matrix Equation: A * X = B
    A = |1 1| X = |f(0)| B = |f(0) + f(1)|
        |1 0|     |f(1)|     |     f1    |
    Find f(n+1) = B = A^n * X
    How To Use?
    1. Calong long buildMatrix() and store values accordingly
    2. Find B = bigMatMod(A, n - 1)
    3. Find B = multiply(B, X)
    4. Now, f(n) = B.m[0][0]
**/


#include<bits/stdc++.h>
#define mod 1000000007
#define MXR 5 /// Change here
#define MXC 5

using namespace std;

struct matrix{
    int R, C;
    long long m[MXR][MXC];
    matrix(){}
    matrix(int r, int c){
        R = r;
        C = c;
    }
    void clear(int r, int c){
        R = r;
        C = c;
    }
};

matrix multiply(matrix a, matrix b){
    matrix res(a.R, b.C);
    for(int r1 = 0; r1<a.R; r1++){
        for(int c1 = 0; c1<a.C; c1++){
            res.m[r1][c1] = 0;
            for(int k = 0; k<a.C; k++){
                res.m[r1][c1] += ((a.m[r1][k]*b.m[k][c1])%mod); /// mod here if needed
                res.m[r1][c1] %= mod; /// mod here if needed
            }
        }
    }
    return res;
}

matrix bigMatMod(matrix a, long long p){
    if(p == 1) return a;
    if(p%2 == 1) {
        return multiply(a, bigMatMod(a, p-1));
    }
    else {
        matrix res = bigMatMod(a, p/2);
        return multiply(res, res);
    }
}

matrix A, B, C, R, X;
long long t, n, a, m, b, p, cas; /// f(0) = a, f(1) = b

int main()
{
    cin>>t;
    while(t--){
        cin>>n>>a>>m>>b>>p;
        /// Set row column accordingly
        A.clear(2, 2);
        B.clear(2, 1);
        C.clear(2, 2);
        R.clear(2, 2);

        /// Store initial values in the matrix
        A.m[0][0] = 1;
        A.m[0][1] = 1;
        A.m[1][0] = 1;
        A.m[1][1] = 0;

        X.m[0][0] = 1;
        X.m[1][0] = 1;

        B = bigMatMod(A,n);
        C = bigMatMod(A,m);

        long long x1 = B.m[1][0];
        long long y1 = B.m[0][0];
        long long x2 = C.m[1][0];
        long long y2 = C.m[0][0];

        if(x1*y2-x2*y1==0){
            printf("Case %lld: Impossible\n",++cas);
            continue;
        }

        long long x = (a*y2-b*y1)/(x1*y2-x2*y1);
        long long y = (a*x2-b*x1)/(y1*x2-y2*x1);

        R = bigMatMod(A,p);

        long long res = ((R.m[1][0]*x)%mod + (R.m[0][0]*y)%mod) %mod;

        long long dx = (a*y2-b*y1)%(x1*y2-x2*y1);
        long long dy = (a*x2-b*x1)%(y1*x2-y2*x1);

        if(x<0 || y<0 || dx || dy){
            printf("Case %lld: Impossible\n",++cas);
        }
        else{
            printf("Case %lld: %lld\n",++cas,res);
        }
    }
    return 0;
}

