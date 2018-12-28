#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

/*
class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {
		if (array.empty()) return false;
		int row = 0;
		int col = array[0].size() - 1;
		int row_size = array.size() - 1;
		while (row <= row_size && col >= 0)
		{
			if (array[row][col] == target) return true;
			else if (array[row][col] < target)
			{
				if (col == 0) return false;
				row++;
			}
			else
			{
				if (row == row_size) return false;
				col--;
			}
		}
		return false;
	}
};

*/