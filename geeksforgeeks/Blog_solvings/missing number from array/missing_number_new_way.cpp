#include<stdio.h>

int getMissingNumber(int arr[], int len){
    int i, total;
    total = len*(len+1)/2;
    for(i=0;i<len-1;i++){
        total -= arr[i];
    }
    return total;
}

int main(){

    int arr[] = {1,2,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int missing_number = getMissingNumber(arr,len+1);

    printf("%d",missing_number);

}
