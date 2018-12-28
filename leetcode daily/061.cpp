#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

/*
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	ListNode* rotateRight(ListNode* head, int k) {
		if (head == NULL || head->next == NULL)
		{
			return head;
		}

		ListNode* temp = head;
		ListNode* cj = head;
		ListNode* end;
		int i = 0;
		int len = 0;
		while (temp != NULL)
		{
			len++;
			temp = temp->next;
		}
		k = k%len;
		temp = head;
		while (temp != NULL)
		{
			if (i > k)
			{
				cj = cj->next;
			}
			i++;
			end = temp;
			temp = temp->next;
		}
		if (k == 0 || i == k)
		{
			return head;
		}
		ListNode* newhead = cj->next;
		end->next = head;
		cj->next = NULL;
		return newhead;
	}
};
*/