#include<bits/stdc++.h>

using namespace std;

int main(){

    int I,V,X,L,C,num,i;

    while(scanf("%d",&num)==1){

        if(num==0)
            break;

        I=1, V=0, X=0, L=0, C=0;

        for(i=2; i<=num; i++){

            if(i%10==1 || i%10==4 || i%10==6 || i%10==9)
                    I++;

            if(i%10==2 || i%10==7)
                I+=2;

            if(i%10==3 || i%10==8)
                I+=3;

            if(i%10==4 || i%10==5 || i%10==6 || i%10==7 || i%10==8)
                V+=1;

            if((i>=9 && i<19) || (i>=40 && i<49) || (i>=59 && i<69) || (i>=90 && i<99))
                X+=1;

            if((i>=19 && i<29) || (i==49) || (i>=69 && i<79) || (i==99))
                X+=2;

            if((i>=29 && i<39) || (i>=79 && i<89))
                X+=3;

            if(i==39 || i==89)
                X+=4;

            if(i>=40 && i<90)
                L+=1;

            if(i>=90 && i<=100)
                C+=1;

        }

        printf("%d: %d i, %d v, %d x, %d l, %d c\n",num,I,V,X,L,C);

    }

    return 0;

}
