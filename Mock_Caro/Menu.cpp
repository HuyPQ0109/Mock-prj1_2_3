#include"Controller.cpp"

class Menu {

public:
	void Play()
	{
		shared_ptr<Controller> C(new Controller);
		while (true) 
		{
			cout << "1. Choi game" << endl;
			cout << "2. Hien thi du lieu nguoi choi" << endl;
			cout << "_________________________________" << endl;
			int option;
			cout << "Lua chon muc muon truy cap: ";
			cin >> option;
			switch (option) 
			{
			case 1: 
			{
				system("cls"); 
				C->Run(); 
				break; 
			}
			case 2: 
			{
				system("cls"); 
				C->DisplayDataPlayer();
				break; 
			}		
			}
		}
	}
};