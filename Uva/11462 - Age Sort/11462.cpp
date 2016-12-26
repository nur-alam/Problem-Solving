#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(){

    int i,T;

    while( cin >> T ){

        int arr[T];

        if(T==0)
            break;

        for(i=0; i<T; i++)
            cin >> arr[i];

        sort(arr,arr+T);

        for(i=0; i<T-1; i++)
            printf("%d ",arr[i]);

        printf("%d",arr[T-1]);

        printf("\n");

    }

    return 0;

}
