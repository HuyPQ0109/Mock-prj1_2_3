#pragma once
#include<iostream>
#include<fstream>
using namespace std;

#define ROW 10
#define COL 10
class CheckWin {
public:
	CheckWin(){}
	bool CheckWinCol(int a[10][10])
	{
		for (int i = 0; i < ROW; i++)
		{
			for (int j = 0; j < COL - 3; j++)
			{
				if ((a[i][j] == a[i][j + 1]) && (a[i][j] == a[i][j + 2]) && (a[i][j] == a[i][j + 3]) && ((a[i][j]==1) || (a[i][j]==2)))
				{
					return true;
			    }
			}				
		}
		return false;
	}
	
	bool CheckWinRow(int a[10][10])
	{
		for (int i = 0; i < ROW - 3; i++)
		{
			for (int j = 0; j < COL; j++)
			{
				if ((a[i][j] == a[i + 1][j]) && (a[i][j] == a[i + 2][j]) && (a[i][j] == a[i + 3][j]) && ((a[i][j]==1) || (a[i][j]==2)))
				{
					return true;
				}
			}
		}
	 return false;
	}

	bool CheckWinDiagonalRight(int a[10][10])
	{		
		for (int i = 0; i < ROW - 3; i++)
		{
			for (int j = 9; j > 4; j--)
			{
				if ((a[i][j] == a[i + 1][j - 1]) && (a[i][j] == a[i + 2][j - 2]) && (a[i][j] == a[i + 3][j - 3]) && ((a[i][j] == 1) || (a[i][j] == 2)))
				{
					return true;
				}
			}
		}
		return false;
	}

	bool CheckWinDiagonalLeft(int a[10][10])
	{		
		for (int i = 0; i < ROW - 3; i++)
		{
			for (int j = 0; j < COL - 3; j++)
			{
				if ((a[i][j] == a[i + 1][j + 1]) && (a[i][j] == a[i + 2][j + 2]) && (a[i][j] == a[i + 3][j + 3]) && ((a[i][j] == 1) || (a[i][j] == 2)))
				{
					return true;
				}
			}
		}
		return false;
	}

	bool CheckWinGame(int a[10][10])
	{
		if (CheckWinRow(a) || CheckWinCol(a) || CheckWinDiagonalRight(a) || CheckWinDiagonalLeft(a))
		{
			return true;
		}
	}
	~CheckWin() {}
};