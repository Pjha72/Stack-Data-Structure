#include<bits/stdc++.h>
using namespace std;

struct MyStack{
    //dynamic size of stack
    vector<int> v;
    //0(1)
    void push(int x){
        v.push_back(x);
    }
    //0(1)
    int pop(){
        int res = v.back();
        v.pop_back();
        return res;
    }
    int size(){
        return v.size();
    }
    int peek(){
        return v.back();
    }
    bool isEmpty(){
        return v.empty();
    }
};

struct MyStack{
    int *arr;
    int capacity;
    int top;

    MyStack(int c){
        capacity = c;
        arr = new int[capacity];
        top = -1;
    }
    //0(1)
    void push(int x){
        if(top == capacity - 1){
            cout<<"Stack is Overflow"<<endl;
        }
        top++;
        arr[top] = x;
    }
    //0(1)
    int pop(){
        if(top == -1){
            cout<<"Stack is UnderFlow"<<endl;
        }
        int res = arr[top];
        top--;
        return res;
    }
    //0(1)
    int peek(){
        if(top == -1){
            return -1;
        }
        return arr[top];
    }
    int size(){
        return (top + 1);
    }
    bool isEmpty(){
        return (top == -1);
    }
};

int main(){
    //static size of stack
    MyStack s(5);
    s.push(3);
    s.push(4);
    s.push(6);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}