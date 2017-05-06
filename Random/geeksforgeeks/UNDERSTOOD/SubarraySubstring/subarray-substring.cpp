#include<bits/stdc++.h>

using namespace std;

void subArray(string str, int len)
{
    // pick starting pint
    for(int i=0; i<len; i++)
    {
        // pick ending point
        for(int j=i; j<len; j++)
        {
            for(int k=i; k<=j; k++)
                cout << str[k] << " ";
            cout << endl;

        }
    }
}

int main(){

    string str = "1234";
    subArray(str,str.length());
    //cout << str[0];
    return 0;

}
