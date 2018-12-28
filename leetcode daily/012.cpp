#include <iostream>
#include <cctype>
#include <string>
#include <vector>
using namespace std;

/*
class Solution {
public:
	string intToRoman(int num) {
		int temp[4] = { 0, 0, 0, 0 }; //qian, shi, bai, ge
		temp[0] = num / 1000;
		num = num % 1000;
		temp[1] = num / 100;
		num = num % 100;
		temp[2] = num / 10;
		temp[3] = num % 10;

		string ans;
		for (int i = 0; i < temp[0]; i++)
		{
			ans.append("M");
		}
		switch (temp[1])
		{
		case 1:
			ans.append("C");
			break;
		case 2:
			ans.append("CC");
			break;
		case 3:
			ans.append("CCC");
			break;
		case 4:
			ans.append("CD");
			break;
		case 5:
			ans.append("D");
			break;
		case 6:
			ans.append("DC");
			break;
		case 7:
			ans.append("DCC");
			break;
		case 8:
			ans.append("DCCC");
			break;
		case 9:
			ans.append("CM");
			break;
		}
		switch (temp[2])
		{
		case 1:
			ans.append("X");
			break;
		case 2:
			ans.append("XX");
			break;
		case 3:
			ans.append("XXX");
			break;
		case 4:
			ans.append("XL");
			break;
		case 5:
			ans.append("L");
			break;
		case 6:
			ans.append("LX");
			break;
		case 7:
			ans.append("LXX");
			break;
		case 8:
			ans.append("LXXX");
			break;
		case 9:
			ans.append("XC");
			break;
		}
		switch (temp[3])
		{
		case 1:
			ans.append("I");
			break;
		case 2:
			ans.append("II");
			break;
		case 3:
			ans.append("III");
			break;
		case 4:
			ans.append("IV");
			break;
		case 5:
			ans.append("V");
			break;
		case 6:
			ans.append("VI");
			break;
		case 7:
			ans.append("VII");
			break;
		case 8:
			ans.append("VIII");
			break;
		case 9:
			ans.append("IX");
			break;
		}
		return ans;
	}
};
*/