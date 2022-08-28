//Six Possible Characters in I/P string :- (,),{,},[,]
//I/P:- str = "([])"   O/P :- Yes
//I/P:- str = "((())"  O/P :- No
//I/P:- str = "{}([()])"  O/P :- Yes
#include<bits/stdc++.h>
using namespace std;

// bool matching(char ch, char x){
//     return ((ch == ')' && x == '(') ||
//                  (ch == '}' && x == '{')||
//                  (ch == ']' && x == '['));
// }
bool Balanced(string str){
    stack<char> s;

    for(char ch: str){
        //opening bracket
        if(ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }
        //for closing bracket
        else{
             if(!s.empty()){
                char x = s.top();
                 if((ch == ')' && x == '(') ||
                 (ch == '}' && x == '{')||
                 (ch == ']' && x == '[')){
                     s.pop();
                 }
                 else{
                     return false;
                 }   
             }
             else{
                 return false;
             }

            // if(s.empty() == false){
            //     return false;
            // }
            // if(matching(s.top(),x) == false){
            //     return false;
            // }
            // else{
            //     s.pop();
            // }
        }
        // return (s.empty() == true);
    }
    if(s.empty()){
        return false;
    }
    else{
        return true;
    }
}


int main(){

    string str = "([])";
    cout<<Balanced(str);
    return 0;
}