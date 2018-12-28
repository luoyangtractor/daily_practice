#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

/*
class Solution 
{
	public:
		void replaceSpace(char *str,int length) 
		{
			int count =0;
			for(int i = 0 ;i<length;i++)
			{
				if(*(str + i) == ' ') count++;
			}
			int new_len = 2*count + length;

			char* tail = str + new_len;
			*(tail + 1)='\0';

			for(int i = length ; i>=0 ; i--)
			{
				if(*(str+i)==' ')
				{
					*tail = '0'; tail--;
					*tail = '2'; tail--;
					*tail = '%'; tail--;
				}
				else
				{
					*tail = *(str + i);
					tail--;
				}
			}
		}
};
*/