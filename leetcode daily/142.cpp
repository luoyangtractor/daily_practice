//#include <iostream>
//#include <vector>
//
//using namespace std;
//
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
//	ListNode *detectCycle(ListNode *head)
//	{
//		ListNode* temp = head;
//		ListNode* double_temp = head;
//		int flag = 0;
//		ListNode* pos = nullptr;
//		while (temp != nullptr&&double_temp != nullptr)
//		{
//			if (flag == 1 && temp == double_temp)
//			{
//				pos = temp;
//				break;
//			}
//			flag = 1;
//			temp = temp->next;
//			if (double_temp->next != nullptr) double_temp = double_temp->next->next;
//			else double_temp = double_temp->next;
//		}
//		if (pos == nullptr) return nullptr;
//		temp = head;
//		while (temp != pos)
//		{
//			temp = temp->next;
//			pos = pos->next;
//		}
//		return temp;
//	}
//};
//
