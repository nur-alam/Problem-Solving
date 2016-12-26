// C program for above approach
#include <stdio.h>
#include <stdlib.h>

// Finding the nth Pentagonal Number
int pentagonalNum(int n)
{
    return (3*n*n - n)/2;
}

// Driver program to test above function
int main()
{
    int n = 10;
    printf("10th Pentagonal Number is = %d \n \n",pentagonalNum(n));

    return 0;
}
