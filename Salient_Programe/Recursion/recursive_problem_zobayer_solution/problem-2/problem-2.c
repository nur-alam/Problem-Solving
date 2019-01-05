#include<stdio.h>
#include<stdlib.h>

void print_first_last(int i, int j, int *arr){
    if(i<=j)
    {
        printf("%d %d\n",arr[i],arr[j]);
        print_first_last(i+1,j-1,arr);
    }
}

int main(){
    int n, i, j;
    scanf("%d",&n);
    int* arr = (int *)malloc(n*sizeof(n));
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    print_first_last(0 , n-1, arr);
}
