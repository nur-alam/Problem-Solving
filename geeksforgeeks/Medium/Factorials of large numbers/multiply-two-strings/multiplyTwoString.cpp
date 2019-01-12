#include<bits/stdc++.h>

using namespace std;

void factorial(int n){

    if(n==1 || n==0) { cout << "1" <<endl; return; }

    vector<int> fact; fact.push_back(1);

    for(int i=2; i<=n; ++i)
    {
        int carry = 0, prod;
        for(int j=0; j<fact.size(); ++j)
        {
            prod = (fact.at(j) * i) + carry;
            fact.at(j) = prod%10;
            carry = prod/10;
        }
        while(carry>0)
        {
            fact.push_back(carry%10);
            carry /= 10;
        }
    }

    for(int i=fact.size()-1; i>=0; --i)
    {
        cout << fact.at(i);
    }
    cout << endl;

}

int main()
{
    int t,num; cin >> t;

    while(t--)
    {
        cin>>num;
        factorial(num);
    }

}
