#include<iostream>
#include<cstdio>

using namespace std;

int main(){

    int n;
    while(scanf("%d",&n)==1){
        int num = n;
        if(n==0)
            break;
        if(num<=100){
            num = num + 11;
            printf("f91(%d) = 91\n",n);
        }
        else{
            num = num -10;
            printf("f91(%d) = %d\n",n,num);
        }

    }

    return 0;

}
