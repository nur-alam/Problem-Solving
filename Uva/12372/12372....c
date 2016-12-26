#include <cstdio>

using namespace std;

int main ()
{
    int testCases;

    scanf ("%d", &testCases);

    int cases = 0;

    while ( testCases-- ) {

        int l, w, h;

        scanf ("%d %d %d", &l, &w, &h);

        printf ("Case %d: ", ++cases);

        if (l <= 20 && w <= 20 && h <= 20) printf ("good");
        else printf ("bad");

        printf ("\n");
    }


}
