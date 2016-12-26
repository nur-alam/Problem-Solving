#include<bits/stdc++.h>

using namespace std;

    int testCase;


void sort_fun(int arr[]){
    int i,j,k,min;
    for(i=0;i<testCase;i++){
        min = i;
        for(j=i+1;j<testCase;j++){
            if(arr[min]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    printf("%d",arr[0]+arr[1]);
}

int main(){
    scanf("%d",&testCase);
    int arr[testCase];
    int i,j,n;
    for(i=0;i<testCase;i++){
        scanf("%d",&arr[i]);
    }

    sort_fun(arr);

    return 0;

}


