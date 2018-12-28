//
//#include <iostream>
//#include <stack>
//#include <queue>
//using namespace std;
//
//class MinStack {
//public:
//	/** initialize your data structure here. */
//	priority_queue <int, vector<int>, greater<int> > a;
//
//	stack<int> b;
//
//	MinStack() {
//
//	}
//
//	void push(int x) {
//		b.push(x);
//		a.push(x);
//	}
//
//	void pop() {
//		stack<int> tmp;
//		while (a.top() != b.top())
//		{
//			tmp.push(a.top());
//			a.pop();
//		}
//		a.pop();
//		while (!tmp.empty())
//		{
//			a.push(tmp.top());
//			tmp.pop();
//		}
//		b.pop();
//	}
//
//	int top() {
//		return b.top();
//	}
//
//	int getMin() {
//		return a.top();
//	}
//};
//
///**
// * Your MinStack object will be instantiated and called as such:
// * MinStack obj = new MinStack();
// * obj.push(x);
// * obj.pop();
// * int param_3 = obj.top();
// * int param_4 = obj.getMin();
// */