//#include<stdio.h>
#include<cstdio>
using namespace std;
int main (){
    int num1 , num2 , result;

    while(2 == scanf("%d %d",&num1, &num2)){
        result = num1 + num2;

        printf("%d",result);
    }
    return 0;
}
