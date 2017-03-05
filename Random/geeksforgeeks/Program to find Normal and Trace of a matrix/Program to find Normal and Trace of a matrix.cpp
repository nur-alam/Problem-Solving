#include<bits/stdc++.h>

using namespace std;

#define max 100

//Returns Trace of a matrix of size nXn
int findTrace(int mat[][max] , int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
        sum += mat[i][i];
    return sum;
}

//Returns Normal of a matrix of size nXn
int findNormal(int mat[][max] , int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            sum += mat[i][j]*mat[i][j];
    return sqrt(sum);
}

int main(){

     int mat[][max] ={
                        {1, 1, 1, 1, 1},
                        {2, 2, 2, 2, 2},
                        {3, 3, 3, 3, 3},
                        {4, 4, 4, 4, 4},
                        {5, 5, 5, 5, 5},
                     };

    cout << "Trace of Matrix = "
            << findTrace(mat,5) << endl;

    cout << "Normal of Matrix = "
            << findNormal(mat,5) << endl;

    return 0;

}
