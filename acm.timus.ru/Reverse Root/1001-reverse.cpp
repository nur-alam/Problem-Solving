#include<cstdio>
#include <cmath>
#define maX 100000
//http://pastebin.com/AbiHw24s
int main()
{
 double p, n,ar[maX];
 for (int i=0;;i++)
 {
  scanf("%lf",&p);
  double  r=sqrt(p);//pow(p,1 / n);
  ar[i]=r;
  for(int j = i;j>=0;j--){
            printf("%.4lf\n",ar[j] );
  }
 }
 return 0;
}
