#include <stdio.h>
int main ()
{
    long long n,k;
    //freopen("in.txt","r",stdin);
    while ( scanf ("%lld", &n) != EOF )
    {
        unsigned long p = 1;
        bool stan = true;
        bool ollie = false;
        while ( p < n )
        {
            if(stan)
            {
                p *= 9;
                stan = false;
                ollie = true;
            }

            else
            {
                p *= 2;
                ollie = false;
                stan = true;
            }
        }
        if ( !stan )
            printf ("Stan wins.\n");
        else
            printf ("Ollie wins.\n");
    }
    //getch();
    return 0;
}
