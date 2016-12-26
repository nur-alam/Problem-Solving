#include<iostream>

using namespace std;

int main(){

    int k,a,b,c,count = 0;

    cin >> k;

    while(k--){

        cin >> a >> b >> c;

        int mid = 0;

        if(a<b){

            if(a<c){

                if(b<c){

                    mid = b;

                }
                else{

                    mid = c;

                }
            }
            else{

                mid = a;

            }
        }

        else{

            if(a>c){

                if(b<c){

                    mid = c;

                }

                else{

                    mid = b;

                }

            }

            else{

                mid = a;

            }

        }

        cout << "Case "<< ++count << ": " << mid << endl;

    }

    return 0;

}
