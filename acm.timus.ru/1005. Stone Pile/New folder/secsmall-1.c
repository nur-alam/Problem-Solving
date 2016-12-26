#include<stdio.h>
int main()
{
    int k,l,i;
    scanf("%d",&k);
    int a[k];//={5,2,1,0,7,8,-5,-8};
    for(i=0;i<k;i++){
        scanf("%d",&a[i]);
    }
    int p=a[0],n=a[0],s=a[0];
    for(i=1;i<k;i++)
        {
            if(a[i]<n)
                n=a[i];
            if(s!=n)
            {
                p=s;
                s=n;
            }
        }
    printf("Second Largest Number is %d",p);
    return 0;
}
