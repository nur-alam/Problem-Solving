#include <iostream>
using namespace std;
int bin[100];
int a[30];
void toBin(int x)
{
	int i=0;
	while(x!=0)
	{
		i++;
		bin[i]=x%2;
		x=x/2;
	}
}
int abs1(int x)
{
	if(x<0)
		return -x;
	return x;
}

int main()
{
	int i,n,m,b,c,d,e,f,sum1,sum2,j,ans=10000000;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<= (1<<n); i++)
	{
		toBin(i);
		sum1=0;
		sum2=0;
		for(j=1;j<=n;j++)
			if(bin[j]==1)
				sum1=sum1+a[j];
			else
				sum2=sum2+a[j];
		ans=min(ans,abs1(sum1-sum2));

	}
	cout<<ans;
	// your code goes here
	return 0;
}
