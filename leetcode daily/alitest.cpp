
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
/*
int main() {
	int n, k;
	int t;
	vector<int> temp;
	while (cin >> n >> k)//注意while处理多个case
	{
		long ans = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> t;
			temp.push_back(t);
		}
		sort(temp.begin(), temp.end());
		long size = temp.size();
		for (int i = 0; i < size; i++)
		{
			if (i - 1 >= 0 && temp[i] == temp[i - 1])
			{
				continue;
			}
			for (int j = i + 1; j < size; j++)
			{
				if (j < size)
				{
					if (temp[j] == temp[i] + k)
					{
						ans++;
						break;
					}
					if (temp[j] > temp[i] + k)
					{
						break;
					}
				}
			}
		}
		cout << ans;
	}
}
*/