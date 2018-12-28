#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
/*
class Solution {
public:
	int jumpFloor(int number) {
		if (number == 1 || number == 0)return 1;

		int now = 1, temp = 1;
		for (int i = 2; i <= number; i++)
		{
			int t = now;
			now += temp;
			temp = t;
		}
		return now;
	}
};
*/
