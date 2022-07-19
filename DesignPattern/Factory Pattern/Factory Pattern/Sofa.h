#pragma once
#include<string>
using namespace std;
class AbstractSofa {																							//…≥∑¢¿‡ 
private:
	double fee = 0;
public:
	virtual ~AbstractSofa() {};
	virtual double getCost() { return fee; };
	virtual string self() const = 0;
};

class ArtSofa :public AbstractSofa {
private:
	double fee = 2.4;
public:
	double getCost() { return fee; }
	string self() const  override {
		return "This is art sofa ";
	}
};

class ModernSofa :public AbstractSofa {
private:
	double fee = 2.5;
public:
	double getCost() { return fee; }
	string self() const  override {
		return "This is modern sofa ";
	}
};

class VictorianSofa :public AbstractSofa {
private:
	double fee = 2.6;
public:
	double getCost() { return fee; }
	string self() const  override {
		return "This is victorian sofa ";
	}
};
