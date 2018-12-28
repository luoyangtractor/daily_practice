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
	ListNode* swapPairs(ListNode* head)
	{
		int val_first = INT_MIN, val_second = 0;
		if (head == NULL || head->next == NULL)
		{
			return head;
		}

		ListNode* first = head;
		ListNode* second = head->next;

		ListNode* temp = second->next;
		second->next = first;
		first->next = temp;
		if (head->next == NULL)
		{
			return second;
		}
		ListNode* third = temp;
		head = second;
		second = third;
		third = third->next;
		while (second != NULL)
		{
			if (third == NULL)
			{
				break;
			}
			swap(first, second, third);
			ListNode* temp = third;
			third = second;
			second = temp;

			first = third;
			second = third->next;
			if (third->next == NULL)
			{
				break;
			}
			third = third->next->next;
		}
		return head;
	}
	void swap(ListNode* first, ListNode* second, ListNode* third)
	{
		first->next = third;
		second->next = third->next;
		third->next = second;
		return;
	}
};
*/