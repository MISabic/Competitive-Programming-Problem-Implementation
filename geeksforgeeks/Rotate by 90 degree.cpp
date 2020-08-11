#include<bits/stdc++.h>
using namespace std;
void rotate (vector<vector<int> >& matrix);

void rotate(vector<vector<int> >& matrix)
{
    int n=matrix.size()/2;
    int sz=matrix.size()-1;
    for(int i=0; i<n; i++){
        swap(matrix[i],matrix[sz-i]);
    }

    n=matrix.size()-1;
    int r=1,c=n;
    for(int i=0; i<n; i++){
        int tr=r,tc=c;
        for(int j=n-i-1; j>=0; j--){
            swap(matrix[i][j],matrix[tr++][tc]);
        }
        ++r;
        --c;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n);
        for(int i=0; i<n; i++)
        {
            matrix[i].resize(n);
            for(int j=0; j<n; j++)
                cin>>matrix[i][j];
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
                cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
