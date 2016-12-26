#include<stdio.h>//http://www.programmingsimplified.com/c/source-code/c-program-delete-element-from-array
int main(){
    int array[100],position,i,j,n,min,mini,minimaldiff;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    min=array[0];
    for(i=1;i<n;i++){
         j=1;
        if(array[i]<min){
            mini=array[i];
            j=i+1;
        }
    }
    //printf("%d\n",min);
    //printf("%d\n",mini);printf("%d",j);scanf("%d",&position); if(j>=n+1){printf("not possible");}
        for(i=j-1;i<n-1;i++){
            array[i]=array[i+1];
        }
       // for(i=0;i<n-1;i++){
          //  printf("%d ",array[i]);
        //}
        mini=array[0];
    for(i=1;i<n;i++){
        if(array[i]<mini){
            mini=array[i];
        }
    }
    //printf("\n%d",mini);
    if(mini>min){
        minimaldiff=mini-min;
        printf("%d",minimaldiff);}
    else{
        minimaldiff=min-mini;
        printf("%d",minimaldiff);}
    return 0;
}
