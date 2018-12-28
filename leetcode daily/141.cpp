//#include <iostream>
//#include <vector>
//
//using namespace std;
//
// struct ListNode 
// {
//      int val;
//      ListNode *next;
//      ListNode(int x) : val(x), next(NULL) {}
// };
// 
// class Solution {
// public:
//	 bool hasCycle(ListNode *head)
//	 {
//		 ListNode* temp = head;
//		 ListNode* double_temp = head;
//		 int flag = 0;
//		 while (temp != nullptr&&double_temp != nullptr)
//		 {
//			 if (flag == 1 && temp == double_temp)return true;
//			 flag = 1;
//			 temp = temp->next;
//			 if (double_temp->next != nullptr) double_temp = double_temp->next->next;
//			 else double_temp = double_temp->next;
//		 }
//		 return false;
//	 }
// };