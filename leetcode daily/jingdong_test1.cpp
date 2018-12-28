#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
/*
int main() {
	int t;
	long long n;
	cin >> t;
	long long x = -1 , y = -1;
	vector<vector<long long >> ans;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		long long temp_y = -1, temp_x = -1;
		int flag = 0;
		if (n%2 == 0)
		{
				
			temp_x = n / 2;
			temp_y = n / temp_x;
			while (temp_x % 2 != 1)
			{
				temp_x /= 2;
				temp_y *= 2;
				if (temp_x == 0)
				{
					flag = 1;
					break;
				}
				//cout <<"aaaa"<< temp_x << " " << temp_y << endl;
			}
		}
		
		vector<long long> t;
		if (flag==0)
		{
			t.push_back(temp_x);
			t.push_back(temp_y);
		}
		else
		{
			t.push_back(-1);

		}
		ans.push_back(t);
		//cout << "sss" << endl;
	}
	for (int i = 0; i < t; i++)
	{
		if (ans[i][0] == -1)cout << "No"<<endl;
		else cout << ans[i][0] << " " << ans[i][1] << endl;
	}
	while (cin >> t);
	return 0;
}
*/