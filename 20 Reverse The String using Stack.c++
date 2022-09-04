#include<bits/stdc++.h>
using namespace std;

char* reverse(char *S, int len)
{
    stack<char> s;
    for(int i=0;i<len;i++){
        char ch = S[i];
        s.push(S[i]);
    }
    for(int i=0;i<len;i++){
        S[i] = s.top();
        s.pop();
    }
    return S;
}

int main(){
    char *S;
    int len;
    reverse(S,len);
    return 0;
}