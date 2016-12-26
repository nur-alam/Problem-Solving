#include<iostream>
#include<cstdio>

using namespace std;

int main(){

    int n, tCase, i, j, temp, count;
    bool p;
    int ara[50];
    scanf("%d",&tCase);

    while(tCase--){

        p = true;
        count = 0;

        scanf("%d",&n);

        for(i=0;i<n;i++){
            scanf("%d",&ara[i]);
        }

        while(p){

            p = false;

            for(i=1,j=0;i<n;i++,j++){

                if(ara[j]>ara[j+1]){

                    temp = ara[j];
                    ara[j] = ara[j+1];
                    ara[j+1] = temp;

                    count++;
                    p = true;

                }
            }

        }

        printf("Optimal train swapping takes %d swaps.\n",count);
    }

    return 0;

}
