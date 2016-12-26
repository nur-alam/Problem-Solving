#include<stdio.h>
int main(){

    int array[100];
    int i,n;
    scanf("%d",&n);
    while(n--){
        for(i=0;i<5;i++){
            scanf("%d",&array[i]);
        }
        int max=array[0];
        int min=array[0];
        for(i=0;i<5;i++){
            if(max<array[i]){
                max=array[i];
            }
            else if(min>array[i]){
                min=array[i];
            }
        }
        printf("%d %d\n",max,min);
    }

    return 0;
}
