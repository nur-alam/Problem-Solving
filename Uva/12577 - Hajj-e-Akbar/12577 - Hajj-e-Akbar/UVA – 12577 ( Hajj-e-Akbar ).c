#include<stdio.h>
//using namespace std;

int main ()
{
    char input [50];
    int cases = 0;

    while ( scanf ("%s", input) && strcmp (input, "*") ) {
        if ( strcmp (input, "Hajj" ) == 0 )
            printf ("Case %d: Hajj-e-Akbar\n", ++cases);
        else
            printf ("Case %d: Hajj-e-Asghar\n", ++cases);
    }

    return 0;
}
