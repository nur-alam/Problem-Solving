#include<stdio.h>
#include<string.h>
int main(){
    int i,j,k,b;
    char n[1000];
    while(gets(n))
    {
        k=strlen(n);
        b=-1;
        for(i=0;i<k;i++)
        {
            if(n[i]==' ')
            {
                for(j=i-1;j>b;j--)
                      printf("%c",n[j]);
                printf(" ");
                b=i;
            }
        }
        for(i=k-1;i>b;i--)
            printf("%c",n[i]);
        printf("\n");
    }
    return 0;
}
