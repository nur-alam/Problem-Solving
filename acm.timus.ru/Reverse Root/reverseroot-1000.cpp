#include <stdio.h>
#include <math.h>
#define maX 100000

int main()
{
 unsigned long long  p, n,ar[maX];
 int i = 0;
 while(scanf("%llud",&p)!=EOF)
 {
  ar[i]=p;
  i++;
 }
for(;i>0;){
        i--;
        printf("%0.4f\n",sqrt(ar[i]));
    }
 return 0;
}
