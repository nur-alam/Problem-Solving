#include<stdio.h>
#include<string.h>
//#include
int main()
{
    // freopen("input.txt","r",stdin);
        int n, i, j, count;
        char string[10000];
        scanf("%d", &n);
        for(j=0; j<n; j++)
            {
                count=0;
                flush(stdin);
                gets(string);
                scanf("%s",&string);
                for(i=0; i<=strlen(string); i++)
                    {
                        if(string[i]==' ')
                            count=count+1;
                    }
                printf("%d\n", count);
            }
        return 0;
}
