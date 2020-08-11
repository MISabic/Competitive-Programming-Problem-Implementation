#include<cstdio>
#define MXR 5
#define MXC 5

using namespace std;

struct matrix{
    int R, C;
    double m[MXR][MXC];
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
                res.m[r1][c1] += ((a.m[r1][k]*b.m[k][c1])); /// mod here if needed
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

long long t, n, f0, f1, m, p, cas; /// f(0) = a, f(1) = b
double a, b;

void buildMatrix(){
    /// Set row column accordingly
    A.clear(2, 2);
    B.clear(2, 1);
    X.clear(2, 1);

    /// Store initial values in the matrix
    A.m[0][0] = a;
    A.m[0][1] = b;
    A.m[1][0] = 1;
    A.m[1][1] = 0;

    X.m[0][0] = f1;
    X.m[1][0] = f0;
}

int main()
{
    scanf("%lld", &t);
    while(t--){
        scanf("%lld %lld %lf %lf %lld", &f0, &f1, &a, &b, &n);

        if(n==0) printf("%lld\n",f0);
        else if(n==1) printf("%lld\n",f1);

        else{

            buildMatrix();
            B = bigMatMod(A,n-1);   // X.print();
            B = multiply(B,X);

            if((long long)(B.m[0][0]) == B.m[0][0])
                printf("%lld\n", (long long)(B.m[0][0]));
            else
                printf("%.0f\n", B.m[0][0]);
        }
    }
    return 0;
}
