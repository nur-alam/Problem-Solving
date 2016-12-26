#include<algorithm>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){

    int i,n;
    int array[3000];
    int array2[3000];
    while(scanf("%d",&n)==1){

        for(i=0; i<n; i++)
            scanf("%d",&array[i]);

        for(i=1; i<n; i++)
            array2[i-1] = abs(array[i] - array[i-1]);

        sort(array2,array2+n-1);

        bool isJolly = true;

        for(i=1; i<n; i++){
            if(array2[i-1]!=i){
                isJolly = false;
                break;
            }
        }

        printf (isJolly ? "Jolly\n" : "Not jolly\n");

        /*if(isJolly)
            printf("Jolly\n");
        else if(!isJolly)
            printf("Not jolly\n");
        */
    }

    return 0;

}
