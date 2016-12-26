#include<stdio.h>
int main(){

    //int array[]={10,2,4,50,-3,6};
   //int array[]={100, 0, 53, 22, 983, 23, 89,-132, 201, 3, 8885};
    int i,j,k,n=11,min;
    int array[1000];
    int max=array[0];
    for(i=1;i<n;i++){

            for(array[0]=0;array[i]<6;array[i]++){
                scanf("%d",&array[i]);
            }

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
