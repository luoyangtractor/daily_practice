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
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
		if (pListHead == NULL) return NULL;
		ListNode* temp = pListHead;
		ListNode* temp2 = pListHead;
		for (int i = 0; i < k - 1; i++)
		{
			temp = temp->next;
			if (temp == NULL) return NULL;
		}

		while (temp->next != NULL)
		{
			temp = temp->next;
			temp2 = temp2->next;
		}
		return temp2;
	}
};
*/