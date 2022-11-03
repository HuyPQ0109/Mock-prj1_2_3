#pragma once
#include<iostream>
#include<fstream> 
using namespace std;

class UI {
public:
	UI() {}
	string InputNamePlayer1() {
		string s;
		cout << "Nhap ten nguoi choi 1: " << endl;
		cin >> s;
		return s;
	}
	string InputNamePlayer2() {
		string s;
		cout << "Nhap ten nguoi choi 2: " << endl;
		cin >> s;
		return s;
	}
	void NoticeWin(string A) {
		cout << A << " Win!" << endl;
	}
	int InputXxy() {
		int x = 0;
		cin >> x;
		return x;
	}
	int InputYxy() {
		int y = 0;
		cin >> y;
		return y;
	}
	
	void DrawTable(int a[10][10]) 
	{
		for (int i = 0; i < 10; i++) 
		{
			cout << "\n-----------------------------------------\n";
			for (int j = 0; j < 10; j++) 
			{
				if (a[i][j] == 1) 
				{ cout << "| X "; }
				else if (a[i][j] == 2) 
				{ cout << "| O "; }
				else 
				{ cout << "|   "; }
				if (j == 9) 
				{ cout << "|"; }
			}

		}
		cout << "\n-----------------------------------------\n";
	}
	
	void InputPositionX(int a[10][10], string A) {
		cout << "turn " << A << ": " << endl;
		int x = UI::InputXxy();
		int y = UI::InputYxy();
		if ((a[x - 1][y - 1] == 1) || (a[x - 1][y - 1] == 2) || (x < 1) || (x > 10) || (y < 1) || (y > 10)) 
		{
			cout << "Loi! Nhap lai toa do can danh: " << endl;
			UI::InputPositionX(a, A);
		}
		else 
		{ 
			a[x - 1][y - 1] = 1;  
		}
	}
	
	void InputPositionO(int a[10][10], string A) {
		cout << "turn " << A << ": " << endl;
		int x = UI::InputXxy();
		int y = UI::InputYxy();
		if ((a[x - 1][y - 1] == 1) || (a[x - 1][y - 1] == 2) || (x < 1) || (x > 10) || (y < 1) || (y > 10))
		{
			cout << "Loi! Nhap lai toa do can danh: " << endl;
			UI::InputPositionO(a, A);
		}
		else 
		{
			a[x - 1][y - 1] = 2; 
		}
	}
	~UI(){}
};