#include <stdio.h>

using namespace std;

int main ()
{
    long long n,k;
    freopen("in.txt","r",stdin);
    while ( scanf ("%lld", &n) != EOF )
    {

        unsigned long p = 1;
        int stan = 1;
        int ollie = 0;

        while ( p < n )
        {

            if(stan)
            {
                p *= 9;
                stan = 0;
                ollie = 1;
            }

            else
            {
                p *= 2;
                ollie = 0;
                stan = 1;
            }
        }
        if ( !stan )
            printf ("Stan wins.\n");
        else
            printf ("Ollie wins.\n");
    }

    return 0;
}
