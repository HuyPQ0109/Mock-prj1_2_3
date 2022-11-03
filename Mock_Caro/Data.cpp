#include"Player.cpp"
#include<vector>
#include<string>
#include<memory>
#include<fstream>
#include<sstream>

class Database {
	
public:
	static void InsertPlayer(shared_ptr<Player> p)
	{
		vector<shared_ptr<Player>> v;
		for(int i = 0; i < v.size(); i++)
		{
			if (v[i]->getNamePlayer() == p->getNamePlayer())
			{
				v[i]->setNumberWin(v[i]->getNumberWin() + p->getNumberWin());
				v[i]->setNumberLose(v[i]->getNumberLose() + p->getNumberLose());
				v[i]->setRateWin(float(v[i]->getNumberWin()) / float((v[i]->getNumberWin()) + (v[i]->getNumberLose())));
				v[i]->setRateLose(float(v[i]->getNumberLose()) / float((v[i]->getNumberWin()) + (v[i]->getNumberLose())));
			}
			v.push_back(p);
		}
		for (int i = 0; i < v.size(); i++)
		{
			ofstream ofs("History.ini", ios::app);
			ofs << p->getNamePlayer() << " ";
			ofs << p->getNumberWin() << " ";
			ofs << p->getNumberLose() << " ";
			ofs << p->getRateWin() * 100 << " ";
			ofs << p->getRateLose() * 100 << " ";
			ofs << endl;
			ofs.close();
		}	
	}

	/*static vector<shared_ptr<Player>> DataPlayer()
	{

		vector<shared_ptr<Player>> v;
		ifstream ifs("History.ini");
		cout << "Du lieu nguoi choi: " << endl;
		for (int i = 0; i < v.size(); i++)
		{
			ifs >> data;
			cout << v[i]->getNamePlayer() << endl;
		}		
		ifs.close();
	}*/
	void ImportInfor(ifstream& ifs)
	{
		string t;
		while (getline(ifs, t))
		{
			cout << t;
		}
}
};