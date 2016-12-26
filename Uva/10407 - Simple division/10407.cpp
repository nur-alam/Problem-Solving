#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int gcd(int a, int b){

    while(b!=0){
        int temp = b;
        b = a % b;
        a = temp;
   }
   return a;
    //return (a==0) ? b:gcd(b%a,a);
}

int main(){

    int arr[1005],i,j,n;

    while(true){

        for(i=0;;i++){
            scanf("%d",&arr[i]);
            if(arr[i]==0){
                break;
            }
        }
        if(arr[0]==0)
            return 0;

        if(i<=2){
            n = abs(arr[0]-arr[1]);
        }

        else{
            int g1 = abs(arr[0]-arr[1]);
            for(j=2;j<i;j++){
                n = gcd(g1,abs(arr[j]-arr[j-1]));
                g1 = n;
            }
        }

        printf("%d\n",n);

    }

    return 0;

}
