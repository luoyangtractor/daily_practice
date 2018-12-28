#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <limits.h>
using namespace std;

/*
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head)
	{
		ListNode* t = head;
		while (t != NULL)
		{
			t = t->next;
		}
		int del = 0;

		ListNode temp(0);
		ListNode* last = &temp;
		last->next = head;
		ListNode* ans = last;
		while (head != NULL)
		{
			if (head->next != NULL)
			{
				if (head->val == head->next->val)
				{
					del = 1;
					last->next = head->next;
					head = head->next;

				}
				else if (del == 1)
				{
					del = 0;
					last->next = head->next;
					head = head->next;
				}
				else
				{
					last = head;
					head = head->next;
				}
			}
			else
			{
				if (del == 1)last->next = NULL;
				break;
			}
		}
		return ans->next;
	}
};

*/