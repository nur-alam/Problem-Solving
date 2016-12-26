#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;
int gcd(int a,int b){
    if(a==0)
        return b;
    else if(b==0)
        return a;
    else{
        while(b!=0){
            int t = b;
            b = a % b;
            a = t;
        }
        return a;
    }
    /*else if(b)
        return gcd(b,a%b);*/
}
int main(){

    int i,j,k;
    char str[1005];
    int arr[1005];
    int tCase;
    scanf("%d",&tCase);
    getchar();

    while(tCase--){

        gets(str);

        int rem = 0, arr[1005] = {0}, maxgcd[10005] = {0}, k = 0;

        for(i=0; str[i]!='\0'; i++){

                if(str[i]!=' '){
                    rem = rem*10+str[i]-'0';
                }
                else{
                    arr[k++] = rem;
                    rem = 0;
                }

        }

        arr[k++] = rem;

        /*for(j=0; arr[j]!='\0'; j++)
            printf("%d ",arr[j]);
        printf("\n");*/

        int l = 1, p = 0;

        for(i=0;arr[i]!='\0';i++){

            for(k=l;arr[k]!='\0';k++){

                maxgcd[p++] = gcd(arr[i],arr[k]);

            }

            l++;

        }
        //printf("%d\n",maxgcd[p-2]);
       sort(maxgcd,maxgcd+p);
       printf("%d\n",maxgcd[p-1]);

    }

    return 0;

}
