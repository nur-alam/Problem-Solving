#include<cstdio>
#include<cstring>


using namespace std;


void dev(char s[],long long int n)
{
    long long int rem=0,i,j=0;
    char a[100000];
    int f=1;
    for(i=0;i<strlen(s);i++)
    {
        rem=s[i]-'0'+rem*10;
        if(rem/n!=0)
        f=0;
        if(f==0)
        printf("%lld",rem/n);
        rem=rem%n;
    }
    if(f)
    printf("0");
}

int rem(char s[],long long int n)
{
   long long  int i,rem=0,j;
    for(i=0;i<strlen(s);i++)
    {
        rem=s[i]-'0'+rem*10;
        rem=rem%n;
    }
    return rem;
}
int main()
{
        //freopen("in.txt","r",stdin);
    char s[100000],t;;
    long long int i,j,k,l,m,n;
    while(scanf("%s %c %lld",&s,&t,&n)==3)
    {
        if(t=='/')
        {
            dev(s,n);
            printf("\n");
        }

        else
        {
            m=rem(s,n);
            printf("%lld\n",m);
        }
    }
    return 0;
}
