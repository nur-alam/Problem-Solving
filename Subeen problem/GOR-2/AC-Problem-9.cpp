#include<cstdio>
int main(){
    int i,n,k;
    scanf("%d",&k);
    while(k--){
        float sum=0;
        scanf("%d",&n);
        float array[n];
        for(i=0;i<n;i++){
            scanf("%f",&array[i]);
        }
        for(i=0;i<n;i++){
            sum=array[i]+sum;
        }
    printf("%0.2f\n",sum/n);
    }
    return 0;
}
