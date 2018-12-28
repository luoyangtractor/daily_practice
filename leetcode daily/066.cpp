#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
/*
class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		int size = digits.size();
		if (digits.empty()) return vector<int>(1, 1);
		int jinwei = (digits[size - 1] + 1) / 10;
		digits[size - 1] = (digits[size - 1] + 1) % 10;

		for (int i = size - 2; i >= 0; i--)
		{
			int temp = (digits[i] + jinwei);
			jinwei = temp / 10;
			digits[i] = temp % 10;
			if (jinwei == 0) break;
		}
		cout << jinwei;
		if (jinwei == 1) digits.insert(digits.begin(), 1);
		return digits;
	}
};

*/