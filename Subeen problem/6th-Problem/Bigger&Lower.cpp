#include<cstdio>
int main(){
    int i,n;
    int s[5];
    scanf("%d",&n);
    while(n--){
        for(i=0;i<5;i++){
            scanf("%d",&s[i]);
        }
        int max=s[0],min=s[0];
        for(i=1;i<5;i++){
            if(s[i]>max){
            max=s[i];
           //min=s[i-1];
        }
        else if (s[i]<max){
            max=max;
        }
        else if(s[i]<min)
           {
               min=s[i];
              //min=s[i];
           }
           else if(s[i>min]){
                min=min;
           }
        }
        printf("%d %d\n",max,min);
    }
    return 0;
}
