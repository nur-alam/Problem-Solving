#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp;
    printf("Enter a number: ");
    scanf("%d",&n);

    temp = sqrt(n);

    if(temp*temp == n) printf("YES.");
    else printf("NO.");

    return 0;
}
