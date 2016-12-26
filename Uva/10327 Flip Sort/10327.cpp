#include<iostream>
#include<cstdio>

using namespace std;

int main(){

    int n,i, j, temp, count;
    bool p;
    int ara[1000];

    while(scanf("%d",&n)!=EOF){

        p = true;
        count = 0;


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

        printf("Minimum exchange operations : %d\n",count);
    }

    return 0;

}
