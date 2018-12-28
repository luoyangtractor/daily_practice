//#include <iostream>
//#include <vector>
//using namespace std;
//  
//struct ListNode 
//{
//      int val;
//      ListNode *next;
//      ListNode(int x) : val(x), next(NULL) {}
// };
// 
//class Solution {
//public:
//	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
//	{
//		int a_len = 0, b_len = 0;
//		ListNode* a = headA, *b = headB;
//		while (a != nullptr)
//		{
//			a = a->next;
//			a_len += 1;
//		}
//		while (b != nullptr)
//		{
//			b = b->next;
//			b_len += 1;
//		}
//		a = headA, b = headB;
//		while (a_len != b_len)
//		{
//			if (a_len > b_len)
//			{
//				a = a->next;
//				a_len--;
//			}
//			else
//			{
//				b = b->next;
//				b_len--;
//			}
//		}
//		while (a != nullptr&&b != nullptr)
//		{
//			if (a == b)return a;
//			a = a->next;
//			b = b->next;
//		}
//		return nullptr;
//	}
//};