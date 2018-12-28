#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <queue>

using namespace std;
/*
class Solution {
private:  
    vector<vector<string>>result;  
    bool check(int row,int col, int n,vector<string>m)//���ÿ�У�ÿ�У���������б��  
    {  
        if (row == 0)  
            return true;  
        int i;  
        int j;  
        for (i = 0; i < row; i++)  
        {  
            if (m[i][col] == 'Q')  
                return false;  
        }  
        i = row - 1;  
        j = col - 1;  
        while (i >= 0 && j >= 0)  
        {  
            if (m[i][j] == 'Q')  
                return false;  
            i--;  
            j--;  
        }  
        i = row - 1;  
        j = col + 1;  
        while (i >= 0 && j < n)  
        {  
            if (m[i][j] == 'Q')  
                return false;  
            i--;  
            j++;  
        }  
        return true;  
    }  
    void add(vector<string>m)  
    {  
        result.push_back(m);  
    }  
    void solve(int row,int n,vector<string>m)  
    {  
        int col;  
        if (row == n )//�������Ѿ�ȫ������  
        {  
            add(m);  
            return;  
        }  
        for (col = 0; col<n; col++)  
        {  
            if (check(row, col,n,m) == true)//�鿴row��col��  
            {  
                    m[row][col] = 'Q';//����һöQ  
                    solve(row + 1,n,m);//�����м����ݹ����  
                    m[row][col] = '.';//���û�дﵽ�ݹ鵽������������֮ǰ���õ�Qȡ��  
            }  
        }  
    }  
public:  
    vector<vector<string>> solveNQueens(int n) {  
        vector<string>m(n,string(n,'.'));//Init  
        solve(0, n,m);  
        return result;  
    }  
};
*/
