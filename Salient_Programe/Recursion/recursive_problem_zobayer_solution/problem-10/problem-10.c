#include <stdio.h>

int lcm(int a, int b, int i)
{
    if(a*i%b == 0) return a*i;
    return lcm(a, b, i+1);
}

int main()
{
    int a, b, l;
    scanf("%d %d", &a, &b);
    l = lcm(a, b, 1);
    printf("%d\n",l);
    return 0;
}
