#include<bits/stdc++.h>

using namespace std;

int evenNumSubstring(char str[])
{
    int len = strlen(str);
    int count = 0;

    for(int i=0; i<len; i++)
    {
        int temp = str[i] - '0';
        if(temp%2 == 0){
            cout << i << " " << count << " ";
            count += (i+1);
            cout << i << " " << count << endl;
        }

    }

    return count;

}

int main(){

    char str[] = "1234";

    cout << evenNumSubstring(str) << endl;

    return 0;

}
