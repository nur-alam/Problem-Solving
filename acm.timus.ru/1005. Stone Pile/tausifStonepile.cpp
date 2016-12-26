// http://acm.timus.ru/problem.aspx?space=1&num=1005
// Runtime: 0.109s
// Tag: adhoc, dp, brute force

// @BEGIN_OF_SOURCE_CODE

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>

#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000
#define LL long long

#define For(i, a, b) for( int i = (a); i < (b); i++ )
#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define Set(a, s) memset(a, s, sizeof (a))
#define Read(r) freopen(r, "r", stdin)
#define Write(w) freopen(w, "w", stdout)

using namespace std;

int main ()
{
    int n;
    int arr [25];

    while ( scanf ("%d", &n) != EOF ) {
        for ( int i = 0; i < n; i++ ) scanf ("%d", &arr [i]);

        int lim = 1 << n;
        int mini = INF_MAX;

        while ( lim ) {
            int sum = 0;
            for ( int i = 0; i < n; i++ ) {
                if ( lim & (1 << i) ) sum += arr [i];
                else sum -= arr [i];
            }
            if ( sum >= 0 && mini > sum ) mini = sum;
            lim--;
        }

        printf ("%d\n", mini);
    }

    return 0;
}

// @END_OF_SOURCE_CODE
