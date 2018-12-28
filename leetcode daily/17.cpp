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
	ListNode* ReverseList(ListNode* pHead) {
		if (pHead == NULL || pHead->next == NULL) return pHead;
		ListNode* pos = pHead->next, *insert = pHead;
		insert->next = NULL;
		while (pos != NULL)
		{
			ListNode* temp = pos;
			pos = pos->next;
			temp->next = insert;
			insert = temp;
		}
		return insert;
	}
};
*/