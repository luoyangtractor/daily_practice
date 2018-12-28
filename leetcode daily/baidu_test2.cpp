#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <limits.h>
using namespace std;
/*
int main()
{
	long correct = 0, half_correct = 0;
	string s, t;
	cin >> s >> t;
	string temp(t.size(), '0');

	for (long i = 0; i < s.size(); i++)
	{
		auto ret = find(t.begin(), t.end(), s[i]);
		if (ret != t.end())
		{
			temp[i] = s[i];
			*ret = '0';
			correct++;
		}
		
	}
	for (long i = 0; i < s.size(); i++)
	{
		if (temp[i] == '0')
		{
			int target2 = 0;
			if (s[i] > 95)
			{
				target2 = s[i] - 32;
			}
			else
			{
				target2 = s[i] + 32;
			}
			auto ret = find(t.begin(), t.end(), s[i]);
			auto ret2 = find(t.begin(), t.end(), target2);
			if (ret == t.end() && ret2 == t.end()){}
			else
			{
				if (ret2 != t.end())
				{
					temp[i] = target2;
					*ret2 = '0';
					half_correct++;
				}
				else
				{
					temp[i] = s[i];
					*ret = '0';
					half_correct++;
				}
			}
			
		}
	}
	cout << correct << " " << half_correct << endl;

	while (cin >> correct);
}

*/