#include<cstdio>
using namespace std;
int main(){
    int kase,i,n,a,b;
    kase=15;
    scanf("%d",&n);
    if(n<kase){
        for(i=1;i<=n;i++){
            scanf("%d",&a);
            scanf("%d",&b);
            if(a>b){
		    	printf(">\n");
		    }
		    else if(a<b)
		    {
		    	printf("<\n");
		    }
		    else{
			    	printf("=\n");
		       }
        }
    }
    return 0;
}
