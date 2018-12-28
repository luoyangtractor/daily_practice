//#include <iostream>
//using namespace std;
//
//class Solution {
//public:
//	int countPrimes(int n)
//	{
//		int ans = 0;
//		for (int i = 2; i < n; i++)
//		{
//			int flag = 0;
//			for (int j = 2; j <= i; j++)
//			{
//				if (j*j <= i)
//				{
//					if (i%j == 0)
//					{
//						flag = 1;
//						break;
//					}
//				}
//				else break;
//			}
//			if (flag == 0)
//			{
//				ans++;
//			}
//		}
//		return ans;
//	}
//};