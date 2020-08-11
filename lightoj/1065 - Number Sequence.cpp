#include<bits/stdc++.h>
#define MXR 5 /// Change here
#define MXC 5

using namespace std;

long long mod;

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

    void print(){
        for (int i = 0; i < R; ++i) {
            for (int j = 0; j < C; ++j)
                cout << m[i][j] << " ";
            cout << endl;
        }
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

void buildMatrix(){
    /// Set row column accordingly
    A.clear(2, 2);
    B.clear(2, 1);
    X.clear(2, 1);

    /// Store initial values in the matrix
    A.m[0][0] = 1;
    A.m[0][1] = 1;
    A.m[1][0] = 1;
    A.m[1][1] = 0;

    X.m[0][0] = b;
    X.m[1][0] = a;
}

int main()
{
    cin>>t;
    while(t--){
        cin>>a>>b>>n>>p;

        /// base cases

        if(n==0) printf("Case %lld: %lld\n",++cas,a);
        else if(n==1) printf("Case %lld: %lld\n",++cas,b);

        else{
            mod=1;
            for(int i=1; i<=p; i++) mod*=10;

            buildMatrix();
            B = bigMatMod(A,n-1);   // X.print();
            B = multiply(B,X);

            printf("Case %lld: %lld\n",++cas,B.m[0][0]);
        }
    }
    return 0;
}
