#include<stdio.h>
#include<math.h>

int main()
{

    int t;
    double x, y, r, r2;
    scanf("%d",&t);
    while(t--)
    {
        r2 = 0;
        scanf("%lf%lf%lf",&x,&y,&r);
        r2 = sqrt(pow(x,2)+pow(y,2));
        printf("%0.2lf %0.2lf\n",r-r2,r+r2);
    }
    return 0;
}
