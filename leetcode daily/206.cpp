///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode(int x) : val(x), next(NULL) {}
// * };
// */
//class Solution {
//public:
//	ListNode* reverseList(ListNode* head)
//	{
//		if (head == nullptr || head->next == nullptr)return head;
//
//		ListNode* pre = head;
//		ListNode* current = head->next;
//		while (current != nullptr)
//		{
//			ListNode* tmp_pre = pre;
//			ListNode* tmp_current = current;
//			pre = current;
//			current = current->next;
//			tmp_current->next = tmp_pre;
//		}
//		head->next = nullptr;
//		ListNode* tmp_head = pre;
//		while (tmp_head != nullptr)
//		{
//			tmp_head = tmp_head->next;
//		}
//		return pre;
//	}
//};
//
