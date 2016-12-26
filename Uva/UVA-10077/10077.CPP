#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main(){
    //freopen("in.txt","r",stdin);
    long long int i , b, R;
    char s[100001],opperation[2];
    while(cin >> s >> opperation >> b){
        int result[100001],j=0,rem = 0;
        for(i=0; i<strlen(s); i++){
            R = (rem*10+s[i]-'0');
            result[j++] = R / b;
            rem = R % b;;
        }
        if(opperation[0] == '/'){
            for(i=0; i<j && result[i]==0; i++){}
            if(i==j)
                cout << "0";
            else{
                for(; i<j; i++){
                    cout << result[i];
                }
            }
            cout << endl;
        }
        else{
            cout << rem << endl;
        }
    }
    return 0;
}





















/*
int divider(char y[],int z,int p)
{
    int c = 0,i;
    for(i=0;i<z;i++)
    {
        c = ((y[i]-'0') + c * 10)% p;
    }
    if(c == 0)return 0;
    else return 1;
}
int main()
{
    char year[1000000];
    int l=0;
    while(scanf("%s",year)!=EOF)
    {
        int flag,x,leap;

        x = strlen (year);
        if(l)
        printf("n");
        l = 1;
        flag = 0;
        leap = 0;
        if( (divider(year,x,4) == 0 && divider(year,x,100) != 0 )
             ||(divider(year,x,400) == 0))
        {

                printf("This is leap year.n");
                leap = 1;
                flag = 1;

        }
        if( divider(year,x,15) == 0)
        {
            printf("This is huluculu festival year.n");
            flag = 1;
        }
        if( leap == 1 && divider(year,x,55)==0 )
        printf("This is bulukulu festival year.n");
        if(flag == 0)
        printf("This is an ordinary year.n");
    }
    return 0;
}*/
