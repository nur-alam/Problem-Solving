#include<stdio.h>
int check_prime(int);
main()
{
   int n, result;
   scanf("%d",&n);
   result = check_prime(n);
   if ( result == 1 )
      printf("%d is prime.\n", n);
   else
      printf("%d is not prime.\n", n);
   return 0;
}
int check_prime(int a)
{
   int c;
   for ( c = 2 ; c <= a - 1 ; c++ )
   {
      if ( a%c == 0 )
	 return 0;
   }
   if ( c == a )
      return 1;
}
