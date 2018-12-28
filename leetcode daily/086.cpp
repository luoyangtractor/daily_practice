#include <iostream>
#include <string>
#include <vector>
#include <map>
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
	ListNode* partition(ListNode* head, int x)
	{
		if (head == NULL) return NULL;
		ListNode* temp = head;
		ListNode l(0), r(0);
		ListNode* leftpos = &l, *rightpos = &r;
		ListNode* left, *right;
		ListNode* ans = leftpos;
		ListNode* a = rightpos;
		int flag = 0;
		while (temp != NULL)
		{
			if (temp->val < x)
			{
				leftpos->next = temp;
				leftpos = leftpos->next;
			}
			else if (temp->val >= x)
			{
				rightpos->next = temp;
				rightpos = rightpos->next;
			}
			temp = temp->next;
		}
		leftpos->next = a->next;
		rightpos->next = NULL;
		//cout<<endl<<leftpos->val<<" "<<rightpos->val<<" "<<ans->next->val<<endl;
		return ans->next;
	}
};

*/