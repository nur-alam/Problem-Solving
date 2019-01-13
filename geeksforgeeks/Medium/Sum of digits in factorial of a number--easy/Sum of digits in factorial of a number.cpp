#include<bits/stdc++.h>

using namespace std;
//void multiply(vector<int> &v, int n)
void multiply(vector<long long int> &v, long long int n)
{
    for(int i=1; i<=n; ++i)
    {
        int carry = 0, prod;
        for(int j=0; j<v.size(); ++j)
        {
            prod = (v.at(j) * i) + carry;
            v.at(j) = prod%10;
            carry = prod/10;
        }
        while(carry>0)
        {
            v.push_back(carry%10);
            carry /= 10;
        }
    }
}

// Returns sum of digits in n!
long long int findSumOfDigits(long long int n)
{
    vector<long long int> v;     // create a vector of type int
    v.push_back(1);    // adds 1 to the end

    multiply(v, n);

    // Find sum of digits in vector v[]
    int sum = 0;
    int size = v.size();
    for (int i = 0 ; i < size ; i++)
        sum += v[i];
    return sum;
}

// Driver code
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        cout << findSumOfDigits(n)<<endl;
    }
    return 0;
}
