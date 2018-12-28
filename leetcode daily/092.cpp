
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <limits.h>
using namespace std;
/*
 struct ListNode 
 {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	ListNode* reverseBetween(ListNode* head, int m, int n) {
		stack<int> t;
		ListNode* temp = head;
		for (int i = 1; i < m; i++)
		{
			temp = temp->next;
		}
		ListNode* temp2 = temp;
		for (int i = 0; i < n-m+1; i++)
		{
			t.push(temp2->val);
			temp2 = temp2->next;
		}
		for (int i = 0; i < n - m + 1; i++)
		{
			temp->val = t.top();
			t.pop();
			temp = temp->next;
		}
		return head;
	}
};
*/


