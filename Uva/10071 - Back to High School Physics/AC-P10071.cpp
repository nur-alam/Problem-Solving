#include<cstdio>
int main(){

    int v,t,s;
    while(scanf("%d %d",&v,&t)!=EOF){
    //scanf("%d %d",&v,&t); //TIME LIMIT
    //if(v>=-100 && v<=100 && t>=0 && t<=200){ //AC
    //if(-100<=v<=100 && 0<=t<=200){ //AC
        s=2*v*t;
        printf("%d\n",s);
        }
    //}

    return 0;
}
