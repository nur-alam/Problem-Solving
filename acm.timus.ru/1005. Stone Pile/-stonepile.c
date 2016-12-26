#include<cstdio>
int main(){
    int array[20],position,i,j,n,min,mini,minimaldiff;
while(1){
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
    for(i=j-1;i<n-1;i++){
            array[i]=array[i+1];
        }
    mini=array[0];
    for(i=1;i<n;i++){
        if(array[i]<mini){
            mini=array[i];
        }
    }
    if(mini>min){
        minimaldiff=mini-min;
        printf("%d\n",minimaldiff);}
    else{
        minimaldiff=min-mini;
        printf("%d\n",minimaldiff);}
}
    return 0;
}

