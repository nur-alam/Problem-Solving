//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700437
#include<bits/stdc++.h>

using namespace std;

void printDuplicates(int arr[], int n){
    int i, j, k, isDuplicate, done;
    for(i=0;i<n;++i){
        isDuplicate = 0, done = 0;
        if(i>0){
            for(k=i-1;k>=0;--k){
                if(arr[i]==arr[k]){
                    done = 1;
                    break;
                }
            }
        }
       if(!done){
            for(j=i+1;j<n;++j){
                if(arr[i]==arr[j]){
                    cout<<arr[i]<<" ";
                    isDuplicate = 1;
                }
            }
       }
       cout << done<<endl;
       if(isDuplicate){
        cout<<"-1"<<endl;
       }
    }
}

int main(){

    int T,n,i,j;
    scanf("%d",&T);
    while(T-->0)
    {
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;++i) scanf("%d",&arr);
        printDuplicates(arr,n);
    }

    return 0;
}
