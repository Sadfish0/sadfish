#pragma once
#include<string>
using namespace std;
class Transport {                                                                          //运输类 ,派生类包括 轮船，卡车，飞机
private:                                                                                   //成员变量包括运输的速度和花费
	int cost = 0;
	int speed = 0;
public:
	virtual ~Transport() {};
	virtual int getSpeed() { return speed; }
	virtual int getCost() { return cost; }
	virtual string Deliver() const = 0;
};

class Ship :public Transport {                                                                                                  
private:
	int cost = 2;
	int speed = 4;
public:
	int getSpeed() { return speed; }
	int getCost() { return cost; }
	string Deliver() const override {
		string result = "SeaTransport: Transport by Ship ";
		string answer = "the cost is " + to_string(cost) + " dollar "+"and the speed is:"+to_string(speed);
		return result + answer;
	}
};
class Truck :public Transport {
private:
	int cost = 1;
	int speed = 2;
public:
	int getCost() { return cost; }
	int getSpeed() { return speed; }
	string Deliver() const override {
		string result = "RoadTransport: Transport by Truck ";
		string answer = "the cost is " + to_string(cost) + " dollar " + "and the speed is:" + to_string(speed);
		return result + answer;
	}
};
class Airplane :public Transport {
private:
	int cost = 3;
	int speed = 6;
public:
	int getCost() { return cost; }
	int getSpeed() { return speed; }
	string Deliver() const override {
		string result = "skyTransport: Transport by Airplane ";
		string answer = "the cost is " + to_string(cost) + " dollar " + "and the speed is:" + to_string(speed);
		return result + answer;
	}
};
