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
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
	{
		ListNode* ans = new ListNode(0);
		ListNode* ret = ans;
		while (l1 != NULL && l2 != NULL)
		{
			cout << l1->val << "  " << l2->val << endl;
			if (l1->val <= l2->val)
			{
				ans->next = l1;
				l1 = l1->next;
				cout << ans->val << endl;
				ans = ans->next;
				ans->next = NULL;
			}
			else
			{
				ans->next = l2;
				l2 = l2->next;
				cout << ans->val << endl;
				ans = ans->next;
				ans->next = NULL;
			}
		}
		if (l1 != NULL)
		{
			ans->next = l1;
			cout << ans->val << endl;
		}
		else if (l2 != NULL)
		{
			ans->next = l2;
			cout << ans->val << endl;
		}
		return ret->next;
	}
};
*/