#include<bits/stdc++.h>
//http://www.geeksforgeeks.org/memset-c-example/
using namespace std;

int main(){

    char str[] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);
    printf("\nsize of str: %d\n", sizeof(str[0]));

    // Fill 8 characters starting from str[13] with '.'
    memset(str, '.', sizeof(str)-1);

    printf("After memset():  %s", str);
    return 0;

}
