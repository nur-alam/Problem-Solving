#include<bits/stdc++.h>

using namespace std;

void factorial(vector<long long int> &v, int n){

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

int findTotalDigits(int n)
{
    vector<long long int> v;     // create a vector of type int
    v.push_back(1);    // adds 1 to the end

    factorial(v, n);

    return v.size();
}

int main()
{
    int t,num; cin >> t;

    while(t--)
    {
        cin>>num;
        cout << findTotalDigits(num) << endl;
    }

}
