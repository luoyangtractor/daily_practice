//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//struct ListNode 
//{
//      int val;
//      ListNode *next;
//      ListNode(int x) : val(x), next(NULL) {}
//  };
//
//class Solution {
//public:
//	ListNode* removeElements(ListNode* head, int val)
//	{
//		while (head != nullptr && head->val == val) head = head->next;
//		if (head == nullptr)return nullptr;
//		ListNode* pre = head;
//		ListNode* current = head->next;
//		while (current != nullptr)
//		{
//			if (current->val == val)
//			{
//				pre->next = current->next;
//				current = pre->next;
//				continue;
//			}
//			pre = pre->next;
//			current = pre->next;
//		}
//		return head;
//	}
//};