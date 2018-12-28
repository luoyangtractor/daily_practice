#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <limits.h>
using namespace std;
/*

10          11
100         192
1000        2893
10000       38894
100000      488895
1000000     5888896
10000000    68888897
100000000   788888898
1000000000  8888888899


int count(long long temp, vector<long long>& ref)
{
	int ans = 1;
	long long t = 1000000000;
	for (int i = 0; i < 9;i++)
	{
		
		int n = temp / t;
		t /= 10;

		temp = temp / 10;
		ans += n*ref[8 - i];
	}
	for (int i = 0; i < temp; i++)
	{
		ans++;
	}
	return ans;
}
int main()
{
	vector<long long> ref = { 11, 192, 2893, 38894, 488895, 5888896, 68888897, 788888898, 8888888899 };
	int t = 0;
	long long temp = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> temp;
		if (temp == 0)
		{
			cout << 1 << endl;
			continue;
		}
		long long ans = 0;
		for (long long i = 1; i <= temp; i++)
		{
			//cout << "count: " << count(i) << endl;
			ans += count(i, ref);
		}
		cout << ans<<endl;
	}
	while (cin >> t);
	return 0;
}

*/