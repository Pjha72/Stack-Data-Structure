#include<bits/stdc++.h>
using namespace std;

class TwoStack{
    int *arr;
    int cap;
    int top1, top2;

    public:
    TwoStack(int n){
        cap = n;
        arr = new int[n];
        top1 = -1;
        top2 = n;
    }

    bool push1(int x){
        if(top1 < top2 - 1){
            top1++;
            arr[top1] = x;
            return true;
        }
        return false;
    }
    bool push2(int x){
        if(top1 < top2 - 1){
            top2--;
            arr[top2] = x;
            return true;
        }
        return false;
    }
    int pop1(){
        if(top1 >= 0){
            int x = arr[top1];
            top1--;
            return x;
        }
        return -1;
    }
    int pop2(){
        if(top2 < cap){
            int x = arr[top2];
            top2++;
            return x;
        }
        return -1;
    }
    int size1(){
        return (top1 + 1);
    }
    int size2(){
        return (cap - top2);
    }
};

int main(){

    return 0;
}