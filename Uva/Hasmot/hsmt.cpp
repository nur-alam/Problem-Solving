#include<cstdio>

using namespace std;

int main()
{
    int a,b,sub;

      while(1==1)  {

            if ( scanf ( "%d %d", &a, &b ) == EOF ) break;

            if(a>b) {
                        sub=a-b;
                        printf("%d\n",sub);
                    }
            if(a<b)
                    {
                        sub=b-a;
                        printf("%d\n",sub);
                    }
            if(a==b)
                    {
                        sub=a-b;
                        printf("%d\n",sub);
                    }
        }

      return 0;

}
