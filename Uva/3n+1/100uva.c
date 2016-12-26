#include <stdio.h>

int cycle(m)
int m;
/* return number of elements in the 3n+1 cycle for m */
{
    int i = 1;

    while (m != 1){
	if (m % 2 == 0){
	    m = m/2;
	}
	else{
	    m = 3*m+1;
	}
	i++;
    }
    return i;
}


int main()
{
    freopen("input.txt","r",stdin);

    int m,n,max,temp;
    int mOriginal,nOriginal;
    int i;

    while (scanf("%d %d",&m,&n)==2){

	/* remember original order of entries for output */
	mOriginal = m;
	nOriginal = n;

	/* swap if out of order */
	if (m > n){
	    temp = m;
	    m = n;
	    n = temp;
	}

	max = cycle(m);
	for(i=m+1;i<=n;i++) {
	    temp = cycle(i);
	    if (temp > max)
		max = temp;
	}
	printf("%d %d %d\n",mOriginal,nOriginal,max);
    }
    return(0);
}
