#include<bits/stdc++.h>
using namespace std;

bool redundantBrackets(string &s){
    stack<char> S;
    for(int i=0;i<s.length();i++){
        char ch = s[i];

        if(ch == '(' || ch == '+' || ch == '-' ||
        ch =='*' || ch =='/'){
            S.push(ch);
        }
        else{
            //ch ya to closing bracket and yaa lowercase letter
            if(ch == ')'){
                bool isRedundant = true;
                while(S.top()!='('){
                    char top = S.top();
                    if(top == '+' || top == '-' ||
                        top =='*' || top =='/'){
                            isRedundant = false;
                    }
                    S.pop();
                }
                if(isRedundant == true){
                    return true;
                }
                S.pop();
            }
        }
    }
    return false;
}
int main(){

}