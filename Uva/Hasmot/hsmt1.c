#include<cstdio>

using namespace std;
int main()
{
    long long a,b,sub;

    while(1==1)  {

            if ( scanf ( "%lld ll%d", &a, &b ) == EOF ) break;

            if(a>b) {
                        sub=a-b;
                        printf("%lld\n",sub);
                    }
            if(a<b)
                    {
                        sub=b-a;
                        printf("%lld\n",sub);
                    }
                if(a==b)
                    {
                        sub=a-b;
                        printf("%lld\n",sub);
                    }
        }

      return 0;

}
