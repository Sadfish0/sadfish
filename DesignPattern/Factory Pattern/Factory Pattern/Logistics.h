#pragma once
#include"Transport.h"
class Logistics {                                                              //������˾          ��½������������Ӧ��������
public:
	virtual ~Logistics() {};
	virtual Transport* CreateTransport() const = 0;
};

class SeaLogistics :public Logistics {                      
public:
	Transport* CreateTransport() const override {
		return new Ship();
	}
};

class RoadLogistics : public Logistics {
public:
	Transport* CreateTransport() const override {
		return new Truck();
	}
};

class SkyLogistics :public Logistics {
public:
	Transport* CreateTransport() const override {
		return new Airplane();
	}
};

class LogisticsCo {                                                 //������˾����ȡ����������Ӧ����Ϣ
public:
	Logistics* SelectLogistics(string type) {
		Logistics* log;
		if (type == "sea") log = new SeaLogistics();
		else if (type == "road") log = new RoadLogistics();
		else log = new SkyLogistics();
		return log;
	}

};
