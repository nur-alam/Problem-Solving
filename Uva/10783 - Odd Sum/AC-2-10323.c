#include<stdio.h>

int main(){

    int i,n;
    long long arr[14];
    arr[0] = 1;

    for(i=1;i<=14;i++)
        arr[i]=arr[i-1]*i;

    while(scanf("%d",&n)==1){

        if(n<0){
            if(n%2==0){
                //printf("Underflow!\n");
                puts("Underflow!");
            }
            else{
                //printf("Overflow!\n");
                puts("Overflow!");
            }
        }

        else if(n<8 && n>-1){
            //printf("Underflow!\n");
            puts("Underflow!");
        }

        else if(n>13){
            //printf("Overflow!\n");
            puts("Overflow!");
        }

        else{
            printf("%lld\n",arr[n]);
            //puts("%lld\n",arr[n]);
        }

    }

    return 0;

}
