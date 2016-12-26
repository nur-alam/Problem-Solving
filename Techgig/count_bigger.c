#include<stdio.h>

int main(){

    int array_length,i,j,count=0,compare_number;
    scanf("%d",&array_length);
    int arr[array_length];
    for(i=0;i<array_length;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&compare_number);
    for(i=0;i<array_length;i++){
        if(arr[i]>compare_number){
            count++;
        }
    }

    printf("%d",count);

    return 0;

}
