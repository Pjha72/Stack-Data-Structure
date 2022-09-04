#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int ele){
    //base case
    if(s.empty()){
        s.push(ele);
        return;
    }
    int x = s.top();
    s.pop();

    insertAtBottom(s,ele);
    s.push(x);
}
void reverseStack(stack<int> &s){
    //base case
    if(s.empty()){
        return ;
    }
    int num = s.top();
    s.pop();

    reverseStack(s);

    insertAtBottom(s, num);
}
int main(){
    stack<int> s;
    reverseStack(s);

}