#include<iostream>
#include<cstring>
#include<cstdio>


using namespace std;

int main(){

    int i;
    char num[1005];
    while(gets(num)){

        if((num[0]-'0')==0 && strlen(num)==1)
            break;

        int m11 = 0;

        for(i=0; i<strlen(num); i++){

            m11 = (m11*10+num[i]-'0')%11;

        }

        if(!m11){

            printf("%s is a multiple of 11.\n",num);

        }

        else{

            printf("%s is not a multiple of 11.\n",num);

        }

    }

    return 0;

}
