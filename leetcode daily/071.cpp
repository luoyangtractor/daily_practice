#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <cctype>
using namespace std;
/*
class Solution {
public:
	string simplifyPath(string path)
	{
		vector<string> temp(path.size(), "");
		if (path.empty() || path.size() == 1) return path;
		int count = 0;
		for (int i = 0; i < path.size(); i++)
		{
			cout << i << " " << temp[count] << endl;
			if (path[i] != '/') temp[count] += path[i];
			else count++;
		}
		string ans;

		stack<string> t;
		for (int i = 0; i < temp.size(); i++)
		{

			cout << temp.size() << " " << temp[i] << endl;
			if (temp[i] == "" || temp[i] == ".")continue;
			if (temp[i] == "..")
			{
				if (t.empty());
				else t.pop();
			}
			else t.push(temp[i]);
		}
		if (t.empty()) return "/";
		vector<string> tt;
		while (!t.empty())
		{
			tt.push_back(t.top());
			t.pop();
		}
		for (int i = tt.size() - 1; i >= 0; i--)
		{
			cout << tt[i] << " ";
			ans += "/";
			ans += tt[i];
		}
		cout << ans;
		return ans;
	}
};

int main()
{
	string n ;
	cin >> n;

	Solution test;
	cout << test.simplifyPath(n);

	while (cin >> n);
}

*/
