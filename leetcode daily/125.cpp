#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <limits.h>
using namespace std;
/*
class Solution {
public:
	bool isValid(char c)
	{
		if ('a' <= c && c <= 'z') return true;
		if ('A' <= c && c <= 'Z') return true;
		if ('0' <= c && c <= '9') return true;
		return false;
	}
	bool isSame(char c1, char c2)
	{
		if (c1 == c2) return true;
		if ('0' <= c1 && c1 <= '9') return false;
		if ('0' <= c2 && c2 <= '9') return false;
		int diff = 'A' - 'a';
		if (c1 == c2 - diff || c1 == c2 + diff) return true;
		return false;
	}
	bool isPalindrome(string s)
	{
		int begin = 0, end = s.size() - 1;
		while (begin < end)
		{
			while (!isValid(s[begin])) begin++;
			if (begin > s.size()) return true;
			while (!isValid(s[end])) end--;
			if (end < 0) return true;
			if (isSame(s[begin], s[end]))
			{
				begin++; end--;
			}
			else return false;
		}
		return true;
	}
};

int main()
{
	Solution test;
	test.isPalindrome("0P");
	int a;
	while (cin>>a);
	return true;
}

*/