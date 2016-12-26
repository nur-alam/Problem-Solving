#include<cstdio>
#include<cmath>
int main(){
    double pi=acos(-1);
    int  k,r,a,b;
    double circlearea,area;
    scanf("%d",&k);
    while(k--){
        scanf("%d%d%d",&r,&a,&b);
        circlearea=pi*r*r;
        area=a*b;
        if(circlearea<=area){
            printf("YES\n");
        }
        else
            printf("NO");
    }
    return 0;
}
