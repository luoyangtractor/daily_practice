#include <iostream>
#include <string>
#include <vector>

using namespace std;
/*
class Solution {
public:
int reverse(int x)
{
if (x == 0)
{
return 0;
}
long ans = 0;
int temp = 0;
vector<int> bitsave;
while (x != 0)
{
temp = x % 10;
bitsave.push_back(temp);
x /= 10;
}
auto iter = bitsave.begin();
while (iter != bitsave.end()-1)
{
ans += *iter;
ans *= 10;
iter++;
}
ans += *iter;
if (ans > INT_MAX || ans < INT_MIN)
{
return 0;
}
else
{
return (int)ans;
}
}
};

int main()
{
cout << INT_MAX << endl << INT_MIN << endl;
return 0;
}

*/