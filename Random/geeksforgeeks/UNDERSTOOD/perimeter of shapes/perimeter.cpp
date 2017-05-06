#include<bits/stdc++.h>

using namespace std;

#define r 2
#define c 2

//find the number of covered side for mat[i][j];
int numOfNeighbour(int mat[][c] , int i, int j)
{
    int count = 0;
    //up
    if(i>0 && mat[i-1][j])
        count++;
    //left
    if(j>0 && mat[i][j-1])
        count++;
    //down
    if(i<r-1 && mat[i+1][j])
        count++;
    //right
    if(j<c-1 && mat[i][j+1])
        count++;
    return count;
}

//Returns sum of perimeter of shapes formed with 1s
int findPerimeter(int mat[r][c])
{
    int perimeter = 0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(mat[i][j])
            {
                perimeter += (4 - numOfNeighbour(mat,i,j));
            }
        }
    }
    return perimeter;
}

int main(){
    int mat[r][c] =
    {
        1,0,
        1,1,
    };
    cout << findPerimeter(mat) << endl;
    return 0;
}
