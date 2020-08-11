#include<bits/stdc++.h>
#define MXR 55 /// Change here
#define MXC 55

using namespace std;

//unsigned long long mod;

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
                        res.m[r1][c1] += ((m[r1][k] * b.m[k][c1])); /// mod here if needed
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
                    res.m[i][j] = (m[i][j] + b.m[i][j]);
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
                res.m[r1][c1] = (m[r1][c1] * val);

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

matrix A, B, C, R, X;

long long ncr[55][55];

void combination()
{
    for(long long i = 0; i <= 51; i++){
        for(long long j = 0; j <= i; j++){
            if(j == 0)
                ncr[i][j] = 1;
            else
                ncr[i][j] = (ncr[i-1][j] + ncr[i-1][j-1]);
        }
    }
}

unsigned long long t, n, a, m, b, k, cas; /// f(0) = a, f(1) = b

void buildMatrix(){
    /// Set row column accordingly
    A.clear(k+2, k+2);
    B.clear(k+2, 1);
    X.clear(k+2, 1);

    /// Store initial values in the matrix
    A.m[0][0] = 1;

    int ind = 0, keep = k;
    for(int i=0; i<=k+1; i++){

        if(i==0) ind = 1;
        else ind = i;

        for(int j=0; j<=keep; j++){
            A.m[i][ind++] = ncr[keep][j];
        }

        if(i!=0) --keep;
    }

    X.setv(1);
}

int main()
{
    combination();

    scanf("%llu", &t);

    while(t--){
        scanf("%llu %llu",&n, &k);

        /// base cases

        if(n==1) printf("Case %lld: 1\n",++cas);

        else{

            buildMatrix();
            B = A.pow(n-1);  //A.print(), X.print(), B.print();
            B = B * X;

            printf("Case %lld: %u\n",++cas,B.m[0][0]);
        }
    }
    return 0;
}

