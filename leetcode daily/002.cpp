/*
#include <iostream>
#include <stddef.h>

using namespace std;

//Definition for singly-linked list.
struct ListNode 
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int tempdigit = 0;
		int jinwei = 0;
		ListNode L = ListNode(tempdigit);
		ListNode* temp = &L;
		while (l1 != NULL || l2 != NULL)
		{
			if (l1 == NULL&&l2 == NULL)
			{
				break;
			}
			
			if (l1 != NULL&&l2 != NULL)
			{
				tempdigit = l1->val + l2->val + jinwei;
				jinwei = 0;
				if (tempdigit >= 10)
				{
					tempdigit -= 10;
					jinwei = 1;
				}
				temp->next = new  ListNode(tempdigit);
				temp = temp->next;
				l1 = l1->next;
				l2 = l2->next;
			}
			else if (l1 == NULL)
			{
				tempdigit = l2->val + jinwei;
				jinwei = 0;
				if (tempdigit >= 10)
				{
					tempdigit -= 10;
					jinwei = 1;
				}
				temp->next = new  ListNode(tempdigit);
				temp = temp->next;
				l2 = l2->next;
			}
			else 
			{
				tempdigit = l1->val + jinwei;
				jinwei = 0;
				if (tempdigit >= 10)
				{
					tempdigit -= 10;
					jinwei = 1;
				}
				temp->next = new  ListNode(tempdigit);
				temp = temp->next;
				l1 = l1->next;
			}
		}
		if (jinwei > 0)
		{
			temp->next = new  ListNode(1);
			temp = temp->next;
		}
		return L.next;
	}
};

int main(){
	Solution test = Solution();
	ListNode l1(9);
	ListNode l11(8);
	ListNode* L1 = &l1;
	L1->next = &l11;
	ListNode l2(1);
	ListNode* L2 = &l2;

	ListNode* ans = test.addTwoNumbers(L1, L2);
	while (ans!= NULL)
	{ 
		cout << ans->val << endl;
		ans = ans->next;
	}
	return 0;
}
*/