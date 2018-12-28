#include <iostream>
#include <cctype>
#include <string>
#include <vector>
using namespace std;
/*
class Solution {
public:
	int romanToInt(string s) {
		int sum = 0;
		for (int i = s.size() - 1; i >= 0; i--)
		{
			switch(s[i])
			{
			case'I':
				sum += 1;
				if (i + 1 < s.size()&&(s[i+1]=='V'||s[i+1]=='X'))
				{
					sum -= 2;
				}
				break;
			case'V':
				sum += 5;
				break;
			case'X':
				sum += 10;
				if (i + 1 < s.size() && (s[i + 1] == 'L' || s[i + 1] == 'C'))
				{
					sum -= 20;
				}
				break;
			case'L':
				sum += 50;
				break;
			case'C':
				sum += 100;
				if (i + 1 < s.size() && (s[i + 1] == 'D' || s[i + 1] == 'M'))
				{
					sum -= 200;
				}
				break;
			case'D':
				sum += 500;
				break;
			case'M':
				sum += 1000;
				break;
			}
		}
		return sum;
	}
};

int main()
{
	int count = 0;
	for (int i = 10; i < 101; i++)
	{
		if (i% 2 == 0&&i % 3 != 0)
		{
			count++;
		}
	}
	cout << count;
	return 0;
}
*/