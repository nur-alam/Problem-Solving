#include<cstdio>
#include<cstring>
int main(){
    int n,reverse=0,mod;
    scanf("%d",&n);
    int t=n;
    while(n!=0){   //n>0 this condition also work as like as n!=0
        mod=n%10;
        n=n/10;
        reverse=(reverse*10)+mod;
        //printf("%d\n",mod);
    }
    //printf("%d",reverse);
    if(t==reverse)
        printf("Its a Palindrome\n");
    else
        printf("Its not a Palincrome\n");
    return 0;
}
