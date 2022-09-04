#include<bits/stdc++.h>
using namespace std;

vector<int> barcketNumbers(string S)
	{
	    vector<int> v;
	    stack<int> s;
	    int index = 0;
	    for(int i=0;i<S.length();i++){
	        if(S[i] == '('){
	            index++;
	            s.push(index);
	            v.push_back(index);
	        }
	        
	        else if(S[i]==')'){
	            v.push_back(s.top());
	            s.pop();
	        }
	    }
	    return v;
}

int main(){

}