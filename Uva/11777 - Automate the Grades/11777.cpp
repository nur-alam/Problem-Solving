#include<bits/stdc++.h>

using namespace std;

int main(){

    int tCase,i,j,term1,term2,final,attend,ct_avg,grade,kase=0;

    int ct[3];

    cin >> tCase;

    while(tCase--){

        cin >> term1 >> term2 >> final >> attend;

        for(i=0;i<3;i++){
            cin >> ct[i];
        }

        sort(ct,ct+3);

        ct_avg = (ct[1]+ct[2])/2;

        grade = term1 + term2 + final + attend + ct_avg;

        if(grade>=90)
            cout << "Case " << ++kase << ": A" << endl;

        else if(grade>=80 && grade<90)
            cout << "Case " << ++kase << ": B" << endl;

        else if(grade>=70 && grade<80)
            cout << "Case " << ++kase << ": C" << endl;

        else if(grade>=60 && grade<70)
            cout << "Case " << ++kase << ": D" << endl;

        else if(grade<60)
            cout << "Case " << ++kase << ": F" << endl;


    }

    return 0;

}
