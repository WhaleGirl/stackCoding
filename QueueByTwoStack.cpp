#include<iostream>
using namespace std;
#include<stack>

class QueueByTwoStack{
	public:
		void Push(int x){
			s1.push(x);
		}
		void Pop(){
			while(s1.size()>1){
				s2.push(s1.top());
				s1.pop();
			}
			s1.pop();
			while(!s2.empty()){
				s1.push(s2.top());
				s2.pop();
			}
		}

	private:
		stack<int> s1;
		stack<int> s2;
};
