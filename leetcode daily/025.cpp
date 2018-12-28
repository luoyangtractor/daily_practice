#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;
/*
struct ListNode {
	int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* reverseKGroup(ListNode* head, int k) 
	{
		ListNode* ans = head;
		ListNode* temp;
		ListNode* new_head = head;
		if (k == 1)
			return ans;
		for (int i = 0; i < k; i++)
		{
			if (new_head == NULL)
				return ans;
			new_head = new_head->next;
		}
		new_head = reversek(head, k); // new_head->......->head;
		ans = new_head;
		while (head != NULL)
		{
			new_head = head->next;
			for (int i = 0; i < k; i++)
			{
				if (new_head == NULL)
					return ans;
				new_head = new_head->next;
			}
			temp = head;
			head = head->next;
			new_head = reversek(head, k);
			temp->next = new_head;
		}
		return ans;
	}
	ListNode* reversek(ListNode* head, int k)
	{
		ListNode* temp;
		ListNode* new_head = head;
		for (int i = 0; i < k - 1; i++)
		{
			temp = head->next;
			head->next = temp->next;
			temp->next = new_head;
			new_head = temp;
		}
		return new_head;
	}
};

*/