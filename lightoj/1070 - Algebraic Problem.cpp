#include<bits/stdc++.h>
#define MXR 5 /// Change here
#define MXC 5

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
};

matrix multiply(matrix a, matrix b){
    matrix res(a.R, b.C);
    for(int r1 = 0; r1<a.R; r1++){
        for(int c1 = 0; c1<a.C; c1++){
            res.m[r1][c1] = 0;
            for(int k = 0; k<a.C; k++){
                res.m[r1][c1] += (a.m[r1][k]*b.m[k][c1]); /// mod here if needed
                //res.m[r1][c1] %= mod; /// mod here if needed
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

unsigned long long t, n, p, q, cas; /// f(0) = a, f(1) = b

void buildMatrix(){
    /// Set row column accordingly
    A.clear(2, 2);
    X.clear(2, 1);

    /// Store initial values in the matrix
    A.m[0][0] = p;
    A.m[0][1] = -q;
    A.m[1][0] = 1;
    A.m[1][1] = 0;

    X.m[0][0] = p;
    X.m[1][0] = 2;
}

int main()
{
    cin>>t;
    while(t--){
        cin>>p>>q>>n;

        /// base cases

        if(n==0) printf("Case %llu: 2\n",++cas);
        else if(n==1) printf("Case %llu: %llu\n",++cas,p);

        else{
            B.clear(2, 1);
            buildMatrix();
            B = bigMatMod(A,n-1);    //B.print();
            B = multiply(B,X);

            printf("Case %llu: %llu\n",++cas,B.m[0][0]);
        }
    }
    return 0;
}

