#include<bits/stdc++.h>
using namespace std;

int giftSafety(std::string gift) {
    int len=gift.length(),c=0;
    for(int i=2; i<len; i++){
        if(gift[i]==gift[i-1] || gift[i]==gift[i-2] || gift[i-1]==gift[i-2])
            c++;
    }
    return c;
}

int main()
{
    return 0;
}

