#include<stdio.h>
int main(){
    int a[]={4,50,2,60,30};
    int i,p=a[0],n=a[0],s=a[0];
    for(i=1;i<8;i++){
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
