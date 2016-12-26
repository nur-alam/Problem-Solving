#include<stdio.h>
main()
{
        int a[5] = {55,11,66,77,72};
        int max,min,i;
        int smax,smin;
        max = min = a[0];
        smax = smin = a[0];
        for(i=0;i<=4;i++)
        {
                if(a[i]>max)
                {
                        smax = max;
                        max = a[i];
                }
                if(max>a[i]&&smax<a[i])
                {
                        smax = a[i];
                }
        }
        printf("the first max element z %d\n",max);
        printf("the second max element z %d\n",smax);
}
