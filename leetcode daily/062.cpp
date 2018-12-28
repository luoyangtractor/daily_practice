#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
/*
class Solution {
public:
	int uniquePaths(int m, int n)
	{
		int num = 0;
		digui(&num, m, n, 1, 1);
		return num;
	}
	void digui(int* num, int m, int n, int row, int col)
	{
		if (row == m && col == n)
		{
			(*num)++;
			cout << *num << endl;
			return;
		}
		if (row + 1 <= m)
		{
			//cout<<row<<"  "<<col<<" "<<*num<<endl;
			digui(num, m, n, row + 1, col);

		}
		if (col + 1 <= n)
		{
			//cout<<row<<"  "<<col<<" "<<*num<<endl;
			digui(num, m, n, row, col + 1);
		}
		return;
	}
};
*/