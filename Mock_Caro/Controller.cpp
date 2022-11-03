#include"CheckWin.cpp"
#include"UI.cpp"
#include"Player.cpp"
#include"Data.cpp"
#include<memory>
#include<vector>
#include<fstream>

class Controller {
private:
	string player1, player2;
	int x, y, a[10][10];
	shared_ptr<UI> u;
	shared_ptr<Player> p1,p2;
	CheckWin Check;
public:
	Controller(){}
	void InputNamePlayer() 
	{
		player1 = u->InputNamePlayer1();
		player2 = u->InputNamePlayer2();
	}
	void InputX() 
	{
		u->InputPositionX(a, player1);
	}
	void InputO() 
	{
		u->InputPositionO(a, player2);
	}
	void DrawTable() 
	{
		u->DrawTable(a);
	}
	
	void Run() 
	{
		InputNamePlayer();
		DrawTable();
		int d = 0;
		while (d == 0)
		{		
			InputX();
			system("cls");
			DrawTable();

			if (Check.CheckWinGame(a))
			{
				Database m;
				p1->setNamePlayer(player1);
				p2->setNamePlayer(player2);
				p1->setNumberWin(1);
				p2->setNumberWin(0);
				p1->setNumberLose(0);
				p2->setNumberLose(1);
				p1->setRateWin(1);
				p2->setRateWin(0);
				p1->setRateLose(0);
				p2->setRateLose (1);
				m.InsertPlayer(p1);
				m.InsertPlayer(p2);
				u->NoticeWin(player1);	
				d++;
			}	

			InputO();
			system("cls");
			DrawTable();

			if (Check.CheckWinGame(a))
			{
				Database m;
				p1->setNamePlayer(player1);
				p2->setNamePlayer(player2);
				p1->setNumberWin(0);
				p2->setNumberWin(1);
				p1->setNumberLose(1);
				p2->setNumberLose(0);
				p1->setRateWin(0);
				p2->setRateWin(1);
				p1->setRateLose(1);
				p2->setRateLose(0);
				m.InsertPlayer(p1);
				m.InsertPlayer(p2);
				u->NoticeWin(player2);
				d++;
			}
		} 	
	}
	void DisplayDataPlayer()
	{

	}
	~Controller() {}
};