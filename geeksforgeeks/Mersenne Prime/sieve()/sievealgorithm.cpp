//https://codingrush.wordpress.com/2013/02/05/uva-11466-largest-prime-divisor/

#include <iostream>

using namespace std;

int main() {
    long long N, Answer, i;

    int counter;

    while (cin>>N && N != 0){

        if (N < 0)
            N *= -1;

        Answer = -1;
        counter = 0;

        for ( i = 2; i*i <= N && N != 1; i++) {
            while (N%i == 0){
                N /= i;
                Answer = i;
            }
            if (Answer == i){
                counter++;
            }
        }


        if (N != 1 && Answer!=-1)
            Answer = N;
        else if(counter == 1)
            Answer = -1;

        cout<<Answer<<endl;
     }

     return 0;
}
