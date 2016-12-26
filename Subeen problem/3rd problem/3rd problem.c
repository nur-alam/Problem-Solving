#include<stdio.h>
#include<string.h>
//#include

int main()
{
    int n, i, j, count;
    char string[10000];

    scanf("%d", &n);

for(j=0; j<n; j++)
    {
        count=1;
        //fflush(stdin);
        gets(string);
    for(i=0; i<strlen(string); i++)
    {
        if(string[i]==' ') count++;
    }
        printf("%d\n", count);
    }
    return 0;
}
