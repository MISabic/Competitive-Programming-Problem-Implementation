#include<bits/stdc++.h>
#define MXR 5 /// Change here
#define MXC 5

using namespace std;

unsigned long long mod = 10007;

struct matrix{
    int R, C;
    unsigned long long m[MXR][MXC];
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

matrix bigMatMod(matrix a, unsigned long long p){
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

unsigned long long t, n, a, b, c, cas; /// f(0) = a, f(1) = b

void buildMatrix(){
    /// Set row column accordingly
    A.clear(4, 4);
    B.clear(4, 1);
    X.clear(4, 1);

    /// Store initial values in the matrix
    A.m[0][0] = a;
    A.m[0][1] = 0;
    A.m[0][2] = b;
    A.m[0][3] = 1;

    A.m[1][0] = 1;
    A.m[1][1] = 0;
    A.m[1][2] = 0;
    A.m[1][3] = 0;

    A.m[2][0] = 0;
    A.m[2][1] = 1;
    A.m[2][2] = 0;
    A.m[2][3] = 0;

    A.m[3][0] = 0;
    A.m[3][1] = 0;
    A.m[3][2] = 0;
    A.m[3][3] = 1;

    X.m[0][0] = 0;
    X.m[1][0] = 0;
    X.m[2][0] = 0;
    X.m[3][0] = c;
}

int main()
{
    cin>>t;
    while(t--){
        cin>>n>>a>>b>>c;

        /// base cases

        if(n<=2) printf("Case %lld: 0\n",++cas);

        else{

            buildMatrix();
            B = bigMatMod(A,n-2);    //B.print();
            B = multiply(B,X);

            printf("Case %lld: %lld\n",++cas,B.m[0][0]);
        }
    }
    return 0;
}
