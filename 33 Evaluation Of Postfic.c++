#include<bits/stdc++.h>
using namespace std;

float operation(int a, int b, char op){
    //perform operation
    if(op == '+'){
        return b+a;
    }
    else if(op == '-'){
        return b-a;
    }
    else if(op == '*'){
        return b*a;
    }
    else if(op == '/'){
        return b/a;
    }

    else if(op == '^'){
        return pow(b,a);
    }
    else{
        return INT_MIN;
    }
}
float EvaluationOfPostfix(string str){
    //step-1 :- create an empty stack
    stack<int> s;

    //step-2 :- Trverse through every symbol x of given postfix
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        //check if str is operand then push to the stack
        if(ch >= '0' && ch <= '9'){
            s.push(ch-'0');
        }
        //check if str is operator
        else{
            int op1 = s.top();
            s.pop();
            int op2 = s.top();
            s.pop();
            int ans = operation(op2,op1,ch);
            s.push(ans);
        }
    }
    return s.top();

}

int main(){
    string str = "10 2*3+";
    cout<<EvaluationOfPostfix(str);
}