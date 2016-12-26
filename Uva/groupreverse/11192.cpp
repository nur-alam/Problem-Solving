#include<bits/stdc++.h>

int main(){

    int n,i,d,j,a,len;

    char str[1000];

    while(n!=0){

        scanf("%d",&n);

        if(n==0){break;}

        getchar();
        gets(str);

        len = strlen(str);
        d = len/n;

        for(i=1;i<=n;i++){

            a = i * d;

            for(j=a-1;j>=a-d;j--){
                printf("%c",str[j]);
            }

        }

        printf("\n");

    }

    return 0;

}
