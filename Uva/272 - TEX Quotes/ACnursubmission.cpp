#include<cstdio>
#include<cstring>
int main(){
    int i,count=0,len;
    char s[100000];
    while(gets(s)){
            len=strlen(s);
    for(i=0;i<len;i++){
            if(s[i]=='"'){
                count++;
                if(count%2==1)
                    printf("``");
                else
                    printf("''");
            }
            else
                printf("%c",s[i]);
    }
    printf("\n");
    }
    return 0;
}
