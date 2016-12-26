//https://quickgrid.wordpress.com/2015/06/15/uva-problem-12015-google-is-feeling-lucky-solution/
#include<iostream>

using namespace std;

int main(){

    int tCase,i,j,n,max,kase=0;
    char web[10][100];
    int arr[10];
    cin >> tCase;

    while(tCase--){

        max = 0;

        for(i=0;i<10;i++){

            cin >> web[i] >> arr[i];

            if(max < arr[i])
                max = arr[i];

        }

        cout << "Case " << "#" << ++kase << ":" << endl;

        for(i=0;i<10;i++){

            if(max == arr[i]){

                cout <<  web[i] << endl;

            }

        }

    }

    return 0;

}
