#include<cstdio>
#include<cstring>
int main(){

    char ch;
    int i,count=0;
    while(scanf("%c",&ch)==1){
       if(ch=='"'){
            count++;
            if(count%2==1)
                printf("``");
            else
                printf("''");
       }
       else
        printf("%c",ch);
    }
    return 0;
}
