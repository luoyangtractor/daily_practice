#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <ctime>

using namespace std;
/*
 void vec_print(const vector<int>& test, int num)
{
	 int size = test.size();
	 cout << "test"<< num<<": "<<size;
	 for (int i = 0; i < size; i++)
	 {
		 cout << test.at(i) << " ";
	 }
	 cout << endl;
}

void generate_rand_vec(vector<int>& test, int len)
 {
	 srand((unsigned)time(NULL));
	 for (int i = 0; i < len; i++)
	 {
		 test.push_back(rand() % INT_MAX);
	 }
 }

// ½µĞò
bool cmp(int a, int b)
{
		 return a>b;
}

int main()
{
	vector<int> test1;
	generate_rand_vec(test1, 15);
    //sort() test
	cout << "sort test" << endl;
	vec_print(test1, 1);
	sort(test1.begin(), test1.end(), cmp);
	vec_print(test1, 1);

	//search() test plus inset() remove() test
	cout << "search test" << endl;
	vector<int> test2;
	generate_rand_vec(test2, 5);
	vec_print(test1, 1);
	vec_print(test2, 2);

	auto pos = search(test1.begin(), test1.end(), test2.begin(), test2.end());
	cout << pos-test1.begin() <<endl;
	test1.insert(test1.begin() + 7, test2.begin(), test2.end());
	pos = search(test1.begin(), test1.end(), test2.begin(), test2.end());
	cout << pos - test1.begin() << endl;

	int a;
	while (cin >> a)
	{
		if (a == 0)
		{
			return 0;
		}
	}
}


*/