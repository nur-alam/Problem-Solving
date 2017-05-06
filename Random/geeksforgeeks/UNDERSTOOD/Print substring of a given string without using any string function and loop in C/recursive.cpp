#include<bits/stdc++.h>

using namespace std;

void mysubstr(char str[], int low, int high)
{
    if(low<=high){
        cout << str[low];
        mysubstr(str, low+1, high);
    }
}

int main(){

    char str[] = "geeksforgeeks";
    mysubstr(str,1,3);
    return 0;

}
