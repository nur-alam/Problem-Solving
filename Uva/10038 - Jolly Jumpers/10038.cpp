#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){

    int i,j,n;

    while(scanf("%d",&n)){

        bool jollynumber = false;

        int arr[n];

        for(i=0; i<n; i++){

            scanf("%d",&arr[i]);

        }

        for(i=1; i<=n; i++){

            for(j=0; j<n; j++){

                if(i==arr[j]){

                    jollynumber = true;
                    break;

                }

                else
                {

                    jollynumber = false;

                }

            }

            if(!jollynumber){

                printf("Not jolly\n");
                break;

            }
        }

        if(jollynumber){

            printf("Jolly\n");

        }


    }

    return 0;

}
