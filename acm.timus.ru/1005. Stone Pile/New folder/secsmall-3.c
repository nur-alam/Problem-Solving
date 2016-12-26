#include<limits.h>
void main()
{
int sec_min, min,n=6,i;
int a[]={1,4,3,2,6,5};
sec_min = min = INT_MAX;
for (i =0; i < n; i ++)
{
if (a[i] < min)
min = a[i];

if(a[i] < sec_min && a[i] > min)
sec_min=a[i];
}
printf("%d %d",min,sec_min);
getchar();
}
