#include<cstdio>
#include<cstring>

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
        sum=sum/n;
    printf("%0.2f\n",sum);
    }
    return 0;
}

