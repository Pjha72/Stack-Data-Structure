#include<bits/stdc++.h>
using namespace std;

void sort(stack<int> s)
{
    multiset<int> tem;
    while(!s.empty()){
       tem.insert(s.top());
       s.pop();
    }
    for(auto it : tem){
       s.push(it);
    }
}
int main(){
    stack<int> s;
    sort(s);
    return 0;
}