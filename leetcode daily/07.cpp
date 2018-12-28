#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


/*

class Solution
{
public:
	void push(int node) {
		if (!stack1.empty())
			stack1.push(node);
		else{
			while (!stack2.empty())
			{
				stack1.push(stack2.top());
				stack2.pop();
			}
			stack1.push(node);
		}
	}

	int pop() {
		int ans = 0;
		if (!stack2.empty())
		{
			ans = stack2.top();
			stack2.pop();
			return ans;
		}
		else
		{
			while (!stack1.empty())
			{
				stack2.push(stack1.top());
				stack1.pop();
			}
			ans = stack2.top();
			stack2.pop();
			return ans;
		}

	}

private:
	stack<int> stack1;
	stack<int> stack2;
};

*/