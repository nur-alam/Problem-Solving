#include<cstdio>
#include<cstring>
int main(){
    char s[100];char t[100];
    gets(s);
    strcpy(t,s);
    strrev(t);
    if(strcmp(s,t)==0)
        printf("Its a palindrome\n");
    else
        printf("Its not a palindrome\n");
    return 0;
}
