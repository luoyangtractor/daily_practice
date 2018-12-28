#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <limits.h>
using namespace std;
/*
long long gcd(long long i, long long j)
{
	long long  r = 0;
	long long a = i > j ? i : j;
	long long b = i > j ? j : i;
	while (b!= 0)
	{
		r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{
	long long ans = 0;
	long long N = 0, n = 0,m = 0, p = 0;
	cin >> N >> n >> m >> p;
	vector<long long> a(N,p);
	vector<long long> tt;
	for (int i = 1; i < N; i++)
	{ 
		a[i] = (a[i - 1] + 153) % p;
	}
	long long max = 0;
	for (long long i = 0; i < n; i++)
	{
		for (long long j = i; j <m; j++)
		{
			long long temp = gcd(i+1, j+1);
			//cout << temp << " "<<a[temp-1]<<endl;
			if (temp - 1>max)max = temp - 1;
			tt.push_back(temp - 1);
		}
	}
	for (int i = 1; i <= max; i++)
	{
		a[i] = (a[i - 1] + 153) % p;
	}
	for (int i = 0; i < tt.size(); i++)
	{
		ans += a[tt[i]];
	}
	cout << ans << endl;
	while (cin>>n);
	return 0;
}

*/
