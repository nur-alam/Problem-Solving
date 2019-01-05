#include<stdio.h>
#include<stdlib.h>

void recursive_print(int n, int *arr){
    if(n==0) return;
    recursive_print(n-1,arr);
    printf("%d ",arr[n-1]);
}

void print_rev(int i, int n, int *arr){
    if(i<n)
    {
        print_rev(i+1,n,arr);
        printf("%d ",arr[i]);
    }
}

int main(){
    int n, i;
    scanf("%d",&n);
    int* arr = (int *)malloc(n*sizeof(n));
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    print_rev(0 , n, arr);
}
