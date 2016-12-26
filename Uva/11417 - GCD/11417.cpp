#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int gcd(int a,int b)
{

    int gcd,temp;

    if(a==0)
        gcd = a;

    else if(b==0)
        gcd = b;

    else{

        while(b!=0)
        {
            temp = b;
            b = a % b;
            a = temp;
        }
        gcd = a;
    }

    return gcd;

}

int main()
{
    //freopen("in.txt","r",stdin);
    int i,j;

    while(true){

        int G=0,N;

        cin >> N;

        if(N==0)
            return 0;

        for(i=1; i<N; i++)

        {

            for(j=i+1; j<=N; j++)

            {

                G = G + gcd(i,j);

            }

        }

        cout << G << endl;

    }


    return 0;

}
