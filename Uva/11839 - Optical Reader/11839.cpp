#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,i,j,k,count,a[5];

    while(cin>>n && n){

        for(i=0;i<n;i++){
            count = 0;
            for(j=0;j<5;j++){

                cin >> a[j];
                if(a[j]<=127){
                    count++;
                    k = j;
                }

            }

            if(count == 1){
                if(k==0)
                    cout << "A" << endl;
                else if(k==1)
                    cout << "B" << endl;
                else if(k==2)
                    cout << "C" << endl;
                else if(k==3)
                    cout << "D" << endl;
                else if(k==4)
                    cout << "E" << endl;
            }
            else{
                cout << "*" << endl;
            }

        }

    }

    return 0;

}
