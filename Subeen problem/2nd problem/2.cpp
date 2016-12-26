#include<cstdio>
using namespace std;
int main()
{
    int i,n,a=0,b=0;
    int num;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        if(num>0)
        {
            a++;
        }
        else if(num<0){
            b++;
        }
    }
    printf("%d %d",a,b);
    return 0;
}
