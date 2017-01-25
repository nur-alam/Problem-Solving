
#include<bits/stdc++.h>

using namespace std;

int main(){
     deque< int > s(2), g(4);
     s.pop_back();
     s.pop_back();
     //s.push_back(0);
     s.push_back(2);
     if(!s.empty()){ cout<<s.back()<<" "<<s[1]<<"this is s queue."; }

    return 0;
}
