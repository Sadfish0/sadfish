#pragma once
#include<string>
using namespace std;
class AbstractTable {
private:
	double fee = 0;																														//桌子类
public:
	virtual ~AbstractTable() {};
	virtual double getCost() { return fee; };
	virtual string self() const = 0;
	virtual string AnotherFurniture(const AbstractChair& c, const AbstractSofa& s) const = 0;											//可以获取其他的家具
};

class ArtTable :public AbstractTable {
private:
	double fee = 3.7;
public:
	double getCost() { return fee; }
	string self() const  override {
		return "This is art table ";
	}
	string AnotherFurniture(const AbstractChair& c, const AbstractSofa& s) const override {
		return "the same style of another furniture :\n" + c.self() + s.self();
	};
};

class ModernTable :public AbstractTable {
private:
	double fee = 3.8;
public:
	double getCost() { return fee; }
	string self() const  override {
		return "This is modern table ";
	}
	string AnotherFurniture(const AbstractChair& c, const AbstractSofa& s) const override {
		return "the same style of another furniture :\n" + c.self() + s.self();
	};
};

class VictorianTable :public AbstractTable {
private:
	double fee = 3.9;
public:
	double getCost() { return fee; }
	string self() const  override {
		return "This is victorian table ";
	}
	string AnotherFurniture(const AbstractChair& c, const AbstractSofa& s) const override {
		return "the same style of another furniture :\n" + c.self() + s.self();
	};
};
