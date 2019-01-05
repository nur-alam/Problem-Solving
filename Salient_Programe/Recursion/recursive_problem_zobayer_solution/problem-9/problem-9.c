#include <stdio.h>

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main()
{
	int a, b, g;
	scanf("%d %d", &a, &b);
	g = gcd(a, b);
	printf("%d\n", g);
	return 0;
}
