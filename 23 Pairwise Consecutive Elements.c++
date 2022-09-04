#include<bits/stdc++.h>
using namespace std;

bool pairWiseConsecutive(stack<int> s)
{
    int n = s.size();
    if(n%2 != 0){
        s.pop();
    }
    while(!s.empty()){
        int q = s.top();
        s.pop();
        int p = s.top();
        s.pop();
        
        if(abs(q-p) != 1){
            return 0;
        }
    }
    return 1;
}
int main(){
    stack<int> s;
    pairWiseConsecutive(s);
    return 0;
}