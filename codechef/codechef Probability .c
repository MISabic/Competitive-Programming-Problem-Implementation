/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<assert.h>

#define epsilon 0.000000001
#define pi acos(-1)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
#define fequal(a,b) fabs(a-b)<epsilon
#define lcm(a,b) (a*b)/gcd(a,b)

int power(int a, int b)
{
    int i,k=0,res=a;
    if(b==0) return 1;
    if(b==1) return a;
    for(i=2; i<=b; i++){
        k+=res*a;
    }
    return k;
}

int main()
{
    int t,a,b,i,c=0,u,v,sub,rem,keep,k,p,m;
    scanf("%d",&t);
    while(t--){
        keep=0;
        scanf("%d %d",&a,&b);
        u=floor(log10(a))+1;
        v=floor(log10(b))+1;
        if(u==v){
            rem=0;
            p=power(10,u);
            m=sub=((p-1)-a+1);
            while (1)
            {
                rem=sub%10;
                //++c;
                sub=sub/10;
                if(sub==0) break;
            }
            p=power(9,u-1);
            k=rem*p;
            keep=m-k;printf("++%d\n",rem);
        }
        else{
            while(u!=v){
                rem=0;
                p=power(10,u);
                m=sub=((p-1)-a+1);//printf("++%d\n",p);
                while (1)
                {
                    rem=sub%10;
                    //++c;
                    sub=sub/10;
                    if(sub==0) break;
                }
                p=power(9,u-1);
                k=rem*p;
                k=m-k;
                keep+=k;
                ++u;
            }
        }printf("%d\n",keep);
        //printf("%d %d\n",u,v);
    }
    return 0;
}
*/



//Modified C++ program to count number from 1 to n with
// 0 as a digit.
#include <bits/stdc++.h>
using namespace std;

// Returns count of integers having zero upto given digits
int zeroUpto(int digits)
{
    // Refer below article for details
    // http://www.geeksforgeeks.org/count-positive-integers-0-digit/
    int first = (pow(10,digits)-1)/9;
    int second = (pow(9,digits)-1)/8;
    return 9 * (first - second);
}

// utility function to convert character representation
// to integer
int toInt(char c)
{
    return int(c)-48;
}

// counts numbers having zero as digits upto a given
// number 'num'
int countZero(string num)
{
    // k denoted the number of digits in the number
    int k = num.length();

    // Calculating the total number having zeros,
    // which upto k-1 digits
    int total = zeroUpto(k-1);

    // Now let us calculate the numbers which don't have
    // any zeros. In that k digits upto the given number
    int non_zero = 0;
    for (int i=0; i<num.length(); i++)
    {
        // If the number itself contains a zero then
        // decrement the counter
        if (num[i] == '0')
        {
            non_zero--;
            break;
        }

        // Adding the number of non zero numbers that
        // can be formed
        non_zero += (toInt(num[i])-1) * (pow(9,k-1-i));
    }

    int no = 0, remaining = 0,calculatedUpto=0;

    // Calculate the number and the remaining after
    // ignoring the most significant digit
    for (int i=0; i<num.length(); i++)
    {
        no = no*10 + (toInt(num[i]));
        if (i != 0)
            calculatedUpto = calculatedUpto*10 + 9;
    }
    remaining = no-calculatedUpto;

    // Final answer is calculated
    // It is calculated by subtracting 9....9 (d-1) times
    // from no.
    int ans = zeroUpto(k-1) + (remaining-non_zero-1);
    return ans;
}

// Driver program to test the above functions
int main()
{
    string num = "107";
    cout << "Count of numbers from 1" << " to "
         << num << " is " << countZero(num) << endl;

    num = "1264";
    cout << "Count of numbers from 1" << " to "
         << num << " is " <<countZero(num) << endl;

    return 0;
}







