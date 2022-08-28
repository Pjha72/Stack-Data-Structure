#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int d){
        data = d;
        next = NULL;
    }
};

struct MyStack{
    Node *head;
    int size;
    MyStack(){
        head = NULL;
        size = 0;
    }

    void push(int x){
        Node *temp = new Node(x);
        temp -> next = head;
        head = temp;
        size++;
    }

    int pop(){
        if(head == NULL){
            return INT_MAX;
        }
        int res = head->data;
        Node *temp = head;
        head = head -> next;
        delete(temp);
        size--;
    }
    int size(){
        return size;
    }
    int peek(){
        return head->data;
    }
    bool isEmpty(){
        return (head == NULL);
    }
};
// Time Complexity of all the method of stack is 0(1)
int main(){
    return 0;
}