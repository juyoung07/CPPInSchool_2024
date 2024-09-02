﻿#include <iostream>
#include <string>

using namespace std;

class Clothes {
public:
	Clothes(string name, int price, int making_time, int beauty) 
		: name_(name), price_(price), making_time_(making_time), beauty_(beauty)
	{};

	virtual void show()
	{
		cout << "이름 : " << name_ << endl;
		cout << "가격 : " << price_ << endl;
		cout << "만드는 시간 : " << making_time_ << endl;
		cout << "아름다움 : " << beauty_ << endl;
	}

private:
	string name_;
	int price_;
	int making_time_;
	int beauty_;
};

class Hanbok : public Clothes {
public:
	Hanbok(string name, int price, int making_time, int beauty, int norigae, int jugori) : Clothes(name, price, making_time, beauty), norigae_(norigae), jugori_(jugori)
	{}

	void show()
	{
		Clothes::show();
		cout << "노리개 갯수 : " << norigae_ << endl;
		cout << "저고리 갯수 : " << jugori_ << endl;
	}

private:
	int norigae_;			// 노리개
	int jugori_;			// 저고리
};

class Kimono : public Clothes {
public:
	Kimono(string name, int price, int making_time, int beauty, int belt) : Clothes(name, price, making_time, beauty), belt_(belt)
	{}

	void show()
	{
		Clothes::show();
		cout << "오비 갯수 : " << belt_ << endl;
	}
private:
	int belt_;				// 오비
};

class Chipao : public Clothes {
public:
	Chipao(string name, int price, int making_time, int beauty, int embroidery) : Clothes(name, price, making_time, beauty), embroidery_(embroidery)
	{}

	void show()
	{
		Clothes::show();
		cout << "자수 갯수? : " << embroidery_ << endl;
	}
private:
	int embroidery_;		// 자수
};

void main(void) {
	Clothes* player = new Hanbok("곤룡포", 100, 10, 100, 0, 0);
	Clothes* friendy = new Kimono("나마에와", 100, 5, 100, 1);

	player->show();
	friendy->show();
	
	delete friendy;
	delete player;
}
