#include<cstdio>
#include<cstring>

int main(){

    char str[1000000];
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){

        gets(str);
        int len = strlen(str);
        int last_digit = str[len-1]-'0';
        if(last_digit%2==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }

    }
    return 0;
}
