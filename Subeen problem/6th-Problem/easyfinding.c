#include<stdio.h>
int main()
{
int a,b,c,d,e,n,x,y;
scanf("%d",&n);
while(n--){
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
if(a>b&&a>c&&a>d&&a>e)
x=a;
else if(b>a&&b>c&&b>d&&b>e)
x=b;
else if(c>a&&c>b&&c>d&&c>e)
x=c;
else if(d>a&&d>b&&d>c&&d>e)
x=d;
else if(e>a&&e>b&&e>c&&e>d)
x=e;
if(a<b&&a<c&&a<d&&a<e)
y=a;
else if(b<a&&b<c&&b<d&&b<e)
y=b;
else if(c<a&&c<b&&c<d&&c<e)
y=c;
else if(d<a&&d<b&&d<c&&d<e)
y=d;
else if(e<a&&e<b&&e<c&&e<d)
y=e;
printf("%d %d\n",x,y);
}
return 0;
}
