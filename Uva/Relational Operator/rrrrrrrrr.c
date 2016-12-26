#include<stdio.h>
int main(){
    int kase,i,n,a,b;
    kase=16;
    scanf("%d",&n);
    if(n<kase){
        for(i=1;i<=n;i++){
            scanf("%d",&a);
            scanf("%d",&b);
            if(a>b){
		    	printf(">");
		    }
		    else if(a<b)
		    {
		    	printf("<");
		    }
		    else{
			    	printf("=");
		       }
        }
    }
    return 0;
}
