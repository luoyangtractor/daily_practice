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
		ListNode temp(0);
		ListNode* last = &temp;
		last->next = head;
		while (head != NULL)
		{
			if (head->next != NULL)
			{
				if (head->val == head->next->val)
				{
					head->next = head->next->next;
				}
				else head = head->next;
			}
			else head = head->next;
		}
		return last->next;
	}
};

*/

