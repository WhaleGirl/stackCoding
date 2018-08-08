#include<iostream>
using namespace std;
#include<stack>
 class Stack{
	 public:
		 void Push(int x){
			s1.push(x);	
			if(min.empty()){
				min.push(s1.top())	
			}
			else{
				 if(min.top()>s1.top()){
					min.push(s1.top());	
				 }else{
					min.push(min.top());	
				}
			}
		 }
		 void Pop(){
			s1.pop();
		 }
		 int Min(){
				return min.top();
		 }
	 private:
		 stack<int> s1;
		 stack<int> min;
 };
