#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

//Cpde by user: divyanshu3490

int main() {
    int t;
	cin>>t;
	while(t--){
	    int i,f=0;
	    string str;
	    cin>>str;
	    stack<char>st;
	    for(i=0;i<str.length();i++){
	        if(str[i]=='{' || str[i]=='[' || str[i]=='(')
	            st.push(str[i]);
	        else if(!st.empty()){
	            if(str[i]==']' && st.top()=='['){
	            st.pop();
	        }
	        else if(str[i]==')' && st.top()=='('){
	            st.pop();
	        }
	        else if(str[i]=='}' && st.top()=='{'){
	            st.pop();
	        }
	        else{
	            f=1;
	            break;
	        }
	        }
	        else{
	            f=1;
	            break;
	        }
	    }
	    if(st.empty() && f==0){
	        cout<<"balanced"<<endl;
	    }
	    else{
	        cout<<"not balanced"<<endl;
	    }
	}

	return 0;
}
