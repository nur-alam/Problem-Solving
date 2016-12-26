#include<stdio.h>

int main(){

    int test_case,i,j;
    scanf("%d",&test_case);
    int arr[test_case];
    for(i=0;i<test_case;i++){
        scanf("%d",&arr[i]);
    }
    //int arr[] = {11,11,11,11,23,11,24,13,55};
    int arr_size = sizeof(arr)/4;
    int majority_arr_number,temp_number;
    int count = 0,temp_count,index;
    for(j=0;j<arr_size;j++){
        temp_number = arr[j];
        temp_count = 0;
        for(i=0;i<arr_size;i++){
            if(arr[i]==temp_number){
                temp_count++;
                index = i;
            }
        }
        if(temp_count>count){
            count = temp_count;
            majority_arr_number = arr[index];
        }
    }

    printf("%d",majority_arr_number);

    return 0;

}
