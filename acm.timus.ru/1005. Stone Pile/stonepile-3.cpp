#include<cstdio>
int main(){
    int i,j,k,n;

    scanf("%d",&k);
    int array[k];
    for(i=0;i<k;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<k-1;i++){
            if(array[i]>array[0]){

            }
        int diff=(array[i+1]-array[i]);
        printf("%d\n",diff);
    }

    return 0;
}
