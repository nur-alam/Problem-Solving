#include<bits/stdc++.h>

using namespace std;

// Utility method to convert character to digit to
// integer digit
int toDigit(char ch)
{
    return ch - '0';
}

int sumOfSubstrings(string num)
{
    int len = num.length() , sum = 0;

    int sumofdigit[len];

    sumofdigit[0] = toDigit(num[0]);
    // loop over all digits of string
    for(int i=1; i<len; i++)
    {
        int numi = toDigit(num[i]);
        sumofdigit[i] = ((i+1)*numi) + (10*(sumofdigit[i-1]));
        sum += sumofdigit[i];
    }

    return sum;
}

int main()
{
    string num = "1234";
    cout << sumOfSubstrings(num);

    return 0;
}
