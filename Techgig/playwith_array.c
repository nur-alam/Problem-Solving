#include<stdio.h>

int main(){

    int array_lenght,i,j,temp_largest = 0,largest;
    scanf("%d",&array_lenght);
    int arr[array_lenght];
    for(i=0;i<array_lenght;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<array_lenght;i++){
        largest = arr[i];
        for(j=0;j<array_lenght;j++){
            if(arr[j]>largest && arr[j]!=temp_largest){
                temp_largest = arr[j];
            }else{
                temp_largest = arr[i];
            }
        }
        printf("%d ",temp_largest);
    }

    return 0;

}
