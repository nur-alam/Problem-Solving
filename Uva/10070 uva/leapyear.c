#include<stdio.h>
#include<string.h>

int main()
{
    long long int n,i=0,j=0,k=0;

    while(scanf("%ld",&n)==1)
    {

        if((n%4==0&&n%100!=0)||n%400==0)
        {
            printf("This is leap year.\n");
            i=1;
        }

        if(n%15==0)
        {
            printf("This is huluculu festival year.\n");
            j=1;
        }
        if(n%55==0&&i==1)

        {
            printf("This is bulukulu festival year.\n");
            k=1;
        }

        if(i==0&&j==0&&k==0){

            printf("This is an ordinary year.\n");

        }

        i=j=k=0;
        printf("\n");
    }

    return 0;

}
