#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <cctype>
using namespace std;

/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
	val(x), next(NULL) {
	}
};


class Solution {
public:
	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
	{
		if (pHead1 == NULL) return pHead2;
		if (pHead2 == NULL) return pHead1;
		ListNode* head = new ListNode(0);
		ListNode* ans = head;
		while (pHead1 != NULL&&pHead2 != NULL)
		{
			if (pHead1->val > pHead2->val)
			{
				head->next = pHead2;
				pHead2 = pHead2->next;
				head = head->next;
			}
			else
			{
				head->next = pHead1;
				pHead1 = pHead1->next;
				head = head->next;
			}
		}
		if (pHead1 != NULL) head->next = pHead1;
		else if (pHead2 != NULL) head->next = pHead2;
		return ans->next;
	}
};
*/