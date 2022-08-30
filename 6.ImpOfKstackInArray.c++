#include<bits/stdc++.h>
using namespace std;

struct KStack{
    int *arr, *top, *next;
    int size, k, free_top;

    KStack(int k, int n){
        free_top = 0;
        size = n;
        arr = new int[n];
        top = new int[k];
        fill(top, top+k, -1);
        for(int i=0;i<size-1;i++){
            next[i] = i+1;
        }
        next[size-1] = -1;
    }

    void push(int sn, int x){
        int i = free_top;
        free_top = next[i];
        next[i] = top[sn];
        top[sn] = i;
        arr[i] = x;
    }
    int pop(int sn){
        int i = top[sn];
        top[sn] = next[i];
        next[i] = free_top;
        free_top = i;
        return arr[i];
    }
};
int main(){

    return 0;
}