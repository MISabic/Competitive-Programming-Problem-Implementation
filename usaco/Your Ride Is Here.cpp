/*
ID: sbcmuhi1
PROG: ride
LANG: C++
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    char arr[10],brr[10];
    while(fin>>arr>>brr){
        int len1=strlen(arr),len2=strlen(brr),s1=1,s2=1;
        for(int i=0; i<len1; i++)
            s1*=(arr[i]-64);
        for(int i=0; i<len2; i++)
            s2*=(brr[i]-64);
        if(s1%47==s2%47) fout << "GO" << endl;
        else fout << "STAY" << endl;
    }
    return 0;
}

