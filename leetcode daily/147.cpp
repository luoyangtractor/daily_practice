//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
// 
//class Solution {
//public:
//	ListNode* insertionSortList(ListNode* head)
//	{
//		if (head == nullptr)return nullptr;
//		if (head->next == nullptr) return head;
//		ListNode* current = head->next;
//		ListNode* current_pre = head;
//		ListNode* assist = new ListNode(INT_MIN);
//		assist->next = head;
//		head->next = nullptr;
//		while (current != nullptr)
//		{
//			//cout<<"current val: "<<current->val<<endl;
//			ListNode* pos = assist->next;
//			ListNode* pre_pos = assist;
//			ListNode* current_next = current->next;
//			//if(current->next!=nullptr) current->next = current->next->next;
//			while (pos != nullptr)
//			{
//				// cout<<pos->val<<" ";
//				if (current->val >= pre_pos->val && current->val <= pos->val)
//				{
//					pre_pos->next = current;
//					current->next = pos;
//					break;
//				}
//				if (pos->next == nullptr&&current->val >= pos->val)
//				{
//					pos->next = current;
//					current->next = nullptr;
//					break;
//				}
//				pre_pos = pre_pos->next;
//				pos = pos->next;
//
//			}
//			//cout<<endl;
//			current = current_next;
//		}
//		return assist->next;
//	}
//};