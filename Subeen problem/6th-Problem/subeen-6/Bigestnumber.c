#include<stdio.h>
int main(){

    //int array[]={10,2,4,50,-3,6};
   int array[]={100, 0, 53, 22, 983, 23, 89,-132, 201, 3, 885};
    int i,j,k,n=11,min;
    int max=array[0];
    for(i=1;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
        else if(array[i]<min){
            min=array[i];
        }

    }
    printf("%d\n",max);
    printf("%d",min);


    return 0;
}
