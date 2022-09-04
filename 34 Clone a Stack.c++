#include<bits/stdc++.h>
using namespace std;

void clonestack(stack<int> st, stack<int>& cloned)
{
    while(!st.empty()){
        int ans = st.top();
        st.pop();
        cloned.push(ans);
    }
    swap(cloned,st);
    while(!st.empty()){
        int ans = st.top();
        st.pop();
        cloned.push(ans);
    }
}

int main(){

}