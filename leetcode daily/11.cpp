#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

/*
class Solution {
public:
	int jumpFloorII(int number) {
		vector<int> temp(number + 1, 1);
		for (int i = 1; i <= number; i++)
		{
			for (int j = 1; j<i; j++)
			{
				temp[i] += temp[j];
			}
		}
		return temp[number];
	}
};
*/