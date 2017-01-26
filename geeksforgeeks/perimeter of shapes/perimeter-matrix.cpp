#include<bits/stdc++.h>
using namespace std;
#define R 2
#define C 2
//http://www.geeksforgeeks.org/find-perimeter-shapes-formed-1s-binary-matrix/
// Find the number of covered side for mat[i][j].
int numofneighbour(int mat[R][C], int i, int j)
{
    int count = 0;

    // UP
    if (i > 0 && mat[i - 1][j])
        count++;

    // LEFT
    if (j > 0 && mat[i][j - 1])
        count++;

    // DOWN
    if (i < R-1 && mat[i + 1][j])
        count++;

    // RIGHT
    if (j < C-1 && mat[i][j + 1])
        count++;

    return count;
}

// Returns sum of perimeter of shapes formed with 1s
int findperimeter(int mat[R][C])
{
    int perimeter = 0;

    // Traversing the matrix and finding ones to
    // calculate their contribution.
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            if (mat[i][j])
                perimeter += (4 - numofneighbour(mat, i ,j));

    return perimeter;
}

// Driven Program
int main()
{
/*    int mat[R][C] =
    {
        0, 1, 0, 0, 0,
        1, 1, 1, 0, 0,
        1, 0, 0, 0, 0,
    };
*/
    int mat[R][C] =
    {
      1,0,
      1,1,
    };
    cout << findperimeter(mat) << endl;

    return 0;
}
