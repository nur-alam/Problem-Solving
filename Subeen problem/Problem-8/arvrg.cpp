#include<cstdio>
int main(){

    int n,i,k;
    scanf("%d",&k);
    int array[5];
    while(k--){
        int arr=0;
        for(i=0;i<5;i++){
            scanf("%d",&array[i]);
        }
        for(i=0;i<5;i++){
            arr=array[i]+arr;
        }
        printf("%d\n",arr/i);
    }
    return 0;
}
