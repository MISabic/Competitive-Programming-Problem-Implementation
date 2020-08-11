#include<bits/stdc++.h>
using namespace std;

map<char,char>revCharList;

void revChar()
{
    revCharList['A']='A';
    revCharList['E']='3';
    revCharList['H']='H';
    revCharList['I']='I';
    revCharList['J']='L';
    revCharList['L']='J';
    revCharList['M']='M';
    revCharList['O']='O';
    revCharList['S']='2';
    revCharList['T']='T';
    revCharList['U']='U';
    revCharList['V']='V';
    revCharList['W']='W';
    revCharList['X']='X';
    revCharList['Y']='Y';
    revCharList['Z']='5';
    revCharList['1']='1';
    revCharList['2']='S';
    revCharList['3']='E';
    revCharList['5']='Z';
    revCharList['8']='8';
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
        if(palin(str)==true && mirror(str)==true)
            printf("%s -- is a mirrored palindrome.\n\n",str.c_str());
        else if(mirror(str)==true)
            printf("%s -- is a mirrored string.\n\n",str.c_str());
        else if(palin(str)==true)
            printf("%s -- is a regular palindrome.\n\n",str.c_str());
        else
            printf("%s -- is not a palindrome.\n\n",str.c_str());
    }
    return 0;
}
