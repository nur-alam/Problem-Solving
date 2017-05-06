#include<bits/stdc++.h>

using namespace std;


int toDigit(char a){
    int numA = a - '0';
    return numA;
}

int sumOfSubstrings(string num)
{
    int len = num.length() , sum = 0;
    int sumOfDigit[len];
    sumOfDigit[0] = toDigit(num[0]);
    for(int i=1; i<len; i++){
        sumOfDigit[i] = ((i+1)*toDigit(num[i]))+(10*(sumOfDigit[i-1]));
        sum += sumOfDigit[i];
        cout << sumOfDigit[i] << endl;
    }
    return sum;
}


int main()
{
    string num = "1234";
    cout << sumOfSubstrings(num);

    return 0;
}
