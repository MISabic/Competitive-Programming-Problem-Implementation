#include<bits/stdc++.h>
#define MXR 7 /// Change here
#define MXC 7

using namespace std;

unsigned long long mod;

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

    void setz(){
        memset(m,0,sizeof(m));
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

unsigned long long t, n, q, a1, b1, c1, a2, b2, c2, f0, f1, f2, g0, g1, g2, cas; /// f(0) = a, f(1) = b

void buildMatrix(){
    /// Set row column accordingly
    A.clear(6, 6);
    B.clear(6, 1);
    X.clear(6, 1);

    A.setz();

    /// Store initial values in the matrix
    A.m[0][0] = a1;
    A.m[0][1] = b1;
    A.m[0][5] = c1;

    A.m[1][0] = 1;

    A.m[2][1] = 1;

    A.m[3][2] = c2;
    A.m[3][3] = a2;
    A.m[3][4] = b2;

    A.m[4][3] = 1;

    A.m[5][4] = 1;

    X.m[0][0] = f2;
    X.m[1][0] = f1;
    X.m[2][0] = f0;
    X.m[3][0] = g2;
    X.m[4][0] = g1;
    X.m[5][0] = g0;
}

int main()
{
    scanf("%llu",&t);
    while(t--){
        scanf("%llu %llu %llu", &a1, &b1, &c1);
        scanf("%llu %llu %llu", &a2, &b2, &c2);
        scanf("%llu %llu %llu", &f0, &f1, &f2);
        scanf("%llu %llu %llu", &g0, &g1, &g2);
        scanf("%llu %llu", &mod, &q);

        /// base cases

        printf("Case %llu:\n",++cas);

        f0%=mod, f1%=mod, f2%=mod;
        g0%=mod, g1%=mod, g2%=mod;

        for(int i=0; i<q; i++){

            scanf("%llu", &n);

            if(n==0) printf("%llu %llu\n", f0, g0);
            else if(n==1) printf("%llu %llu\n", f1, g1);
            else if(n==2) printf("%llu %llu\n", f2, g2);

            else{

                buildMatrix();
                B = bigMatMod(A,n-2);    //B.print(); X.print();
                B = multiply(B,X);

                printf("%llu %llu\n", B.m[0][0], B.m[3][0]);
            }

        }
    }
    return 0;
}
