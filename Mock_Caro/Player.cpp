#pragma once
#include<iostream>
#include<fstream>

using namespace std;

class Player {
	string NamePlayer;
	int NumberWin, NumberLose;
	float RateWin, RateLose;
public:
	Player() {}
	void setNumberWin(int NumberWin) {
		this->NumberWin = NumberWin;
	}
	void setNumberLose(int NumberLose) {
		this->NumberLose = NumberLose;
	}
	void setRateWin(float RateWin) {
		this->RateWin = RateWin;
	}
	void setRateLose(float RateLose) {
		this->RateLose = RateLose;
	}
	void setNamePlayer(string NamePlayer) {
		this->NamePlayer = NamePlayer;
	}
	int getNumberWin() {
		return NumberWin;
	}
	int getNumberLose() {
		return NumberLose;
	}
	float getRateWin() {
		return RateWin;
	}
	float getRateLose() {
		return RateLose;
	}
	string getNamePlayer() {
		return NamePlayer;
	}
	~Player(){}
};