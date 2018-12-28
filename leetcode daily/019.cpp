#include <iostream>
#include <cctype>
#include <string>
#include <vector>
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
	ListNode* removeNthFromEnd(ListNode* head, int n) 
	{
		ListNode* temp = head;
		ListNode* before = head, *after = head;
		int length = 0;
		while (temp != NULL)
		{
			temp = temp->next;
			length++;
		}
		if (length < n)
		{
			return head;
		}
		if (length == n)
		{
			return head->next;
		}
		int count = n;
		while (count>0)
		{
			count--;
			after = after->next;
		}
		while (after->next != NULL)
		{
			before = before->next;
			after = after->next;
		}
		temp = before->next;
		before->next = before->next->next;
		free(temp);
		return head;
	}
};

*/