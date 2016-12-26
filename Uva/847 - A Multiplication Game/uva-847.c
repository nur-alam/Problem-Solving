
#include <cstdio>
#include <cmath>
#include <cstring>
#include <fstream>
#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    long int i,p,n;
    while(scanf("%ld",&n)==1)
    {
        p=1;
        i=1;
        while(1)
        {
            if(i%2==1)
                p*=9;
            else
                p*=2;

            if(p>=n)
                break;
            i+=1;
        }
        if(i%2==1)
            printf("Stan wins.\n");
        else
            printf("Ollie wins.\n");
    }
    return 0;
}
