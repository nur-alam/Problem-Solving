#include<iostream>

using namespace std;

int main()
{

    string a,b;
    cin >> a >> b;

    string temp;
    string c = a+b;

    cout << a.size() << " " << b.size() <<endl;

    cout << c << endl;

    temp[0]=a[0];
    a[0]=b[0];
    b[0]=temp[0];

    cout << a << " " << b << endl;

    return 0;

}

