#include <cstdio>
using namespace std;

char num[10001];
long long int b,R;
char oper[2];

int main()
{
    //freopen ("input.txt","rt",stdin);
    while (scanf("%s%s%lld",num,oper,&b) != EOF){
        int Q[10001],pos = 0;
        int i;
        for (i = 0, R = 0; num[i]; i++){
            R = R * 10 + (num[i] - '0');
            //printf("%d ",Q[0]);
            Q[pos++] = R / b;
           // printf("%d ",Q[0]);         // ans前面幾個數字可能為0，等等輸出要從非0開始;
            R = R % b;
        }
        if (oper[0] == '/'){
            for (i = 0; i < pos && Q[i] == 0; i++)
                ;
            printf("%d %d ",i,pos);
            if (i == pos) printf("0");   // 如果被除數比除數小的情況
            else
                for (; i < pos; i++) printf ("%d",Q[i]);
            printf("\n");
        }
        else
            printf("%lld\n",R);

    }
    return 0;
}
