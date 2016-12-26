#include<cstdio>
int main(){
    int array[5],diffarray[5];
    int i,j,n,k;
    int diff,minimaldiff;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(i=0;i<n;i++){
            scanf("%d",&array[i]);
        }

        if(array[i]>array[0]){
            diff=(array[i]-array[0]);
            diffarray[i]=diff;
        }
        else{
            diff=(array[0]-array[i]);
            diffarray[i]=diff;
        }
       for(i=0;i<n;i++){
            printf("%d\n",diffarray[i]);
        }
    }
    return 0;
}
