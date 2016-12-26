#include<stdio.h>
#include<string.h>
//#include<cstring>
int main(){

    char s[100];
    int length,i,k;
    scanf("%d",&k);
    getchar();
    while(k--){
    gets(s);
    length=0;
    for(i=0;i<=strlen(s);i++){         //s[i]!='\0';i++){
        if(s[i]==' '){
            length++;
        }
    }
          printf("%d\n",++length);
    }
    return 0;
}
