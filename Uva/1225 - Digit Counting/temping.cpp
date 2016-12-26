#include<stdio.h>

int main()
{
    int ara1[] = {0,1,2,3,4,5,6,7,8,9};
    int ara2[1000];
    int n,t,i,j,num,last_digit;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int count[]={0,0,0,0,0,0,0,0,0,0};

        for(i=0;i<n;i++){
            ara2[i] = i+1;
        }

        for(i=0;i<10;i++){
            for(j=0;j<n;j++){
                if(ara1[i]==ara2[j]){
                    count[i]++;
                }
            }
        }

        for(j=0;j<n;j++){
            if(ara2[j]>9){
                num = ara2[j];
                while(num!=0){
                    last_digit = num % 10;
                    count[last_digit]++;
                    num = num / 10;
                }
            }
        }

        for(i=0;i<10;i++)
            printf("%d ",count[i]);

        printf("\n");
    }
    return 0;
}
