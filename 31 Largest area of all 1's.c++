#include<bits/stdc++.h>
using namespace std;
#define R C

int largestFirst(int arr[], int n){
    stack<int> s;
    int res = 0;
    for(int i=0;i<n;i++){
        while(!s.empty() && arr[s.top()]>=arr[i]){
            int tp = s.top();
            int curr = arr[tp]*(s.empty())? i : (i-s.top()-1);
            res = max(res,curr);
        }
        s.push(i);
    }

    while(!s.empty()){
        int tp = s.top();
        int curr = arr[tp]*(s.empty())? n : (n-s.top()-1);
        res = max(res,curr);
    }
    return res;
}
int maxRectangle(int mat[4][4]){
    int res = largestFirst(mat[0],4);
    for(int i=1;i<4;i++){
        for(int j=0;j<4;j++){
            if(mat[i][j] == 1){
                mat[i][j] += mat[i-1][j];
            }
        }
        res = max(res,largestFirst(mat[i],4));
    }
    return res;
}
int main(){
    int mat[4][4] = {{0,0,1,1},
                     {0,0,1,1},
                     {1,1,1,1},
                     {1,1,1,1}};
    maxRectangle(mat);
}