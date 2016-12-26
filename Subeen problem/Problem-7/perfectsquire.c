/** C Program to check Perfect Square **/

#include <stdio.h>

int main()
{
    int a, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(a = 0; a <= n; a++)
    {
        if (n == a * a)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
