#include <cstdio>

int main()
{
    int test_case, cola_enjoyed, empty,j,i;
    for(j=0; j<10; j++)
    {
        scanf("%d", &empty);
        {
            if(empty==0) break;
            cola_enjoyed=0;
            for(i=0; ; i++)
            {
                cola_enjoyed+=empty/3;
                empty=(empty/3)+(empty%3);
                if(empty==2) empty+=1;
                if(empty==1) break;
            }
            printf("%d\n", cola_enjoyed);
        }
    }
}
