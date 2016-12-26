#include <stdio.h>
#include <string.h>
int main ()
{
    int i,j,k,n;
    scanf("%d",&k);
    while(k--){
        scanf("%d",&n);
        j=n%10;
        printf("%d",j);
        switch(j){
            case '0':
                printf("Even");
                break;
            case '2':
                printf("Even");
                break;
            case '4':
                printf("Even");
                break;
            case '6':
                printf("Even");
                break;
            case '8':
                printf("Even");
                break;
            case '1':
                printf("Odd");
                break;
            case '3':
                printf("Odd");
                break;
            case '5':
                printf("Odd");
                break;
            case '7':
                printf("Odd");
                break;
            case '9':
                printf("Odd");
                break;
            default:
                break;

        }
    }

    return 0;
}

