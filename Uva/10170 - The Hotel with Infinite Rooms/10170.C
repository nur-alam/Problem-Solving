#include<stdio.h>

int main()
{

    long i,s,d,total_day;

    while(scanf("%ld%ld",&s,&d)==2)
    {
        total_day = 0;
        for(i=s;;i++){
            total_day += i;
            if(total_day>=d)
            {
                printf("%ld\n",i);
                break;
            }
        }
   // printf("%0.0lf\n",i);
    }
    return 0;

}
