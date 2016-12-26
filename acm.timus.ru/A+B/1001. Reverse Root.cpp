#include <cmath>
#include <cstdio>

int main(){

    int i,n;
   scanf("%d",&n);
   double ara[n];
   for(i=0;i<n;i++){
        scanf("%lf",&ara[i]);
   }

    for(i=n;i>-1;i--){
         printf("%.4lf\n",sqrt(ara[i]));
    }
    return 0;
}
