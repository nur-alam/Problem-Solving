#include<stdio.h>
#include<stdio.h>
int main(){
    int i,j,n,k;
    char c[20];
    char d[20];
    scanf("%s %s",c,d);
    int len=strlen(d);
    //printf("length is %d",len);
    for(i=0,j=0;i!=len;i++,j++){
        if(c[i]==d[j]){
            c[i]=d[j];
    }
    else
       printf("not equal\n");
       return 0;
    }
    printf("equal\n");
    printf("%s\n",d);

    return 0;
}
