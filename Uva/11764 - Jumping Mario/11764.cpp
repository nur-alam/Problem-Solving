#include<iostream>
#include<cstdio>
using namespace std;

int main()
{

    int n,i,j,count=0,testCases;
    int arr[50];
    cin>>testCases;//freopen("in.txt", "r", stdin);
    while(testCases--)
    {
        cin>>n;
        int ups=0,down=0;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(j=0; j<n-1; j++)
        {
            if(arr[j]<arr[j+1])
            {
                ++ups;
            }
            if(arr[j]>arr[j+1])
            {
                ++down;
            }
            if(arr[j] == arr[j+1])
            {
                continue;
            }
        }
        cout << "Case "<<++count<<": "<<ups<<" "<<down<<endl;

    }


    return 0;

}
