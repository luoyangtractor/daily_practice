//
//
//
//class Solution {
//public:
//	int rangeBitwiseAnd(int m, int n) {
//		//return (n > m)?(rangeBitwiseAnd(m >> 1, n >> 1) << 1):m;
//		int count = 0;
//		while (n != m)
//		{
//			m >>= 1;
//			n >>= 1;
//			count++;
//		}
//		return (m << count);
//	}
//};