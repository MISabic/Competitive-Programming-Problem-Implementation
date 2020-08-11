#include<bits/stdc++.h>
using namespace std;

map<char,char>revCharList;

void revChar()
{
    revCharList['A']='A';
    revCharList['H']='H';
    revCharList['I']='I';
    revCharList['M']='M';
    revCharList['O']='O';
    revCharList['T']='T';
    revCharList['U']='U';
    revCharList['V']='V';
    revCharList['W']='W';
    revCharList['X']='X';
    revCharList['Y']='Y';
    revCharList['b']='d';
    revCharList['d']='b';
    revCharList['o']='o';
    revCharList['p']='q';
    revCharList['q']='p';
    revCharList['v']='v';
    revCharList['w']='w';
    revCharList['x']='x';
}

bool palin(string str)
{
    string arr=str;
    reverse(arr.begin(),arr.end());
    if(arr==str) return true;
    else return false;
}

bool mirror(string str)
{
    int k=str.length()-1,p=str.length()-1;
    while(k>=(p-k)){
        if(revCharList[str[k]]!=str[p-k])
            return false;
        --k;
    }
    return true;
}

int main()
{
    revChar();
    string str;
    while(cin>>str){
        if(mirror(str)==true)
            printf("TAK\n");
        else printf("NIE\n");
    }
    return 0;
}
