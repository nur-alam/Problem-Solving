#include<cstdio>
#include<cstring>
int main(){
    int i,j,length=0;
    char ch;
    char s[1000];
    char word [1000];
    while(gets(s)){
    length=strlen(s);
    for(i=0,j=0;i<=length;i++,j++){
            if(s[i]==' '){
                word[j]='\0';
                printf("%s ",strrev(word));
                    j=-1;
            }
            if(s[i]=='\0'){
                word[j]='\0';
                printf("%s\n",strrev(word));
            }
            else
                word[j]=s[i];
        }
    }
    return 0;
}
