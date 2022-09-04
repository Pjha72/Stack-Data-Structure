#include<bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int>&s, int ele){
    //base case
    if((s.empty()) || (!s.empty() && s.top() < ele)){
        s.push(ele);
        return;
    }

    int n = s.top();
    s.pop();

    sortedInsert(s,ele);
    s.push(n);
}
void sort(stack<int>&s){
    //base case
    if(s.empty()){
        return ;
    }

    int num = s.top();
    s.pop();
    //recursive call
    sort(s);

    sortedInsert(s, num);
}
int main(){

}