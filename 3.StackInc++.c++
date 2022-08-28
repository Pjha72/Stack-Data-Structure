#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    s.push(2);
    s.push(4);
    s.push(5);
    // cout<<s.size()<<endl;
    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<s.top()<<endl;

    // Stack Traversal --> Print the element in Reverse Order
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}