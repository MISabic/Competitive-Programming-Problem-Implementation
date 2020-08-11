#include<bits/stdc++.h>
#define MXR 35 /// Change here
#define MXC 35

using namespace std;

unsigned long long mod;

struct matrix{
    int R, C;
    unsigned long long m[MXR][MXC];
    matrix()
    {
        memset(m, 0, sizeof(m));
    }
    matrix(int r, int c)
    {
        R = r;
        C = c;
        memset(m, 0, sizeof(m));
    }

    void clear(int r, int c)
    {
        R = r;
        C = c;
    }

    matrix operator * (const matrix b)
    {
        matrix res(R, b.C);
        if(C == b.R)
        {
            for(int r1 = 0; r1 < R; r1++){
                for(int c1 = 0; c1 < C; c1++){
                    res.m[r1][c1] = 0;
                    for(int k = 0; k < C; k++){
                        res.m[r1][c1] += ((m[r1][k] * b.m[k][c1]) % mod); /// mod here if needed
                        res.m[r1][c1] %= mod; /// mod here if needed
                    }
                }
            }
            return res;
        }
        printf("error!!!!!!!!!!!!!!\n");
        return res;
    }

    matrix operator + (const matrix b)
    {
        matrix res(R, C);
        if(R==b.R && C==b.C)
        {
            for(int i = 0; i < R; i++)
                for(int j = 0; j < C; j++)
                    res.m[i][j] = (m[i][j] + b.m[i][j]) % mod;
            return res;
        }
        printf("error!!!!!!!!!!!!!!\n");
        return res;
    }

    matrix operator * (const long long val)
    {
        matrix res(R, C);
        for(int r1 = 0; r1 < R; r1++)
            for(int c1 = 0; c1 < C; c1++)
                res.m[r1][c1] = (m[r1][c1] * val) % mod;

        return res;
    }

    matrix identity()
    {
        matrix temp;
        temp.R=R;
        temp.C=C;
        for(int i = 0; i < R; i++)
            temp.m[i][i]=1;

        return temp;
    }

    matrix pow(unsigned long long pow)
    {
        matrix temp=(*this);
        matrix ret=(*this).identity();

        while(pow)
        {
            if(pow % 2 == 1)
                ret = ret * temp;
            temp = temp * temp;
            pow /= 2;

        }

        return ret;
    }

    void setv(int v)
    {
        for (int i = 0; i < R; ++i)
            for (int j = 0; j < C; ++j)
                m[i][j] = v;
    }

    void print()
    {
        printf("-----------------------------\n");
        printf("Row :: %d, Column :: %d\n", R, C);
        for (int i = 0; i < R; ++i) {
            for (int j = 0; j < C; ++j)
                cout << m[i][j] << " ";
            cout << endl;
        }
        printf("-----------------------------\n");
    }

};

matrix bigMatMod(matrix a, unsigned long long p)
{
    if(p == 1) return a;
    if(p%2 == 1) {
        return (a * bigMatMod(a, p-1));
    }
    else {
        matrix res = bigMatMod(a, p/2);
        return (res * res);
    }
}

matrix A, B, C, R, X;

unsigned long long t, n, k, p, q, cas; /// f(0) = a, f(1) = b

/*void buildMatrix()
{
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
}*/

int main()
{
    cin>>t;
    while(t--){
        cin>>n>>k;

        /// base cases

        /*if(n==0) printf("Case %lld: %lld\n",++cas,a);
        else if(n==1) printf("Case %lld: %lld\n",++cas,b);

        else{*/
            mod = 10;
            A.clear(n, n);
            B.clear(n, n);

            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    scanf("%llu", &A.m[i][j]);
                }
            }

            p = (k*(k+1))/2;

            //buildMatrix();
            //cout<<"hello  "<<p<<endl;
            //A.print();
            A.print();
            B = A.pow(p);
            B.print();
            //B = B * X;

            //printf("Case %lld: %lld\n",++cas,B.m[0][0]);
        //}
    }
    return 0;
}
