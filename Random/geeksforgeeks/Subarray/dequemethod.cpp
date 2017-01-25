#include <iostream>
#include <deque>

using namespace std;

void printKMax(int arr[], int n, int k)
{
    std::deque<int>  Qi(k);
    int i, j;
    for (i = 0; i < k; ++i)
    {
        while ( (!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back();  // Remove from rear
        Qi.push_back(i);
    }
    if(!Qi.empty()){
        for(j=0;j<k;++j){
            cout<<Qi[j]<<" ";
        }
    }cout<<endl;
 for ( ; i < n; ++i)
    {
        cout << arr[Qi.front()] << " ";
        while ( (!Qi.empty()) && Qi.front() <= i - k)
            Qi.pop_front();
        while ( (!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back();
        Qi.push_back(i);
    }
}
int main()
{
    int arr[] = {12, 1, 78, 90, 57, 89, 56};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    printKMax(arr, n, k);
    return 0;
}
