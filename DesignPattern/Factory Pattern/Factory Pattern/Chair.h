#pragma once
#include<string>
using namespace std;
class AbstractChair {                                                                               //抽象椅子类，  其子类有艺术类型椅子，现代椅子，维多利亚的椅子
private:
	double fee = 0;																					//成员变量包括 椅子的长宽高以及费用等
	double length = 0;																				//成员函数有获取以及修改椅子的尺寸，获取椅子的费用等
	double width = 0;
	double height = 0;
public:
	virtual ~AbstractChair() {};
	virtual double getCost() { return fee; };
	virtual void getInfo() {};
	virtual void modify(int _length,int _width,int _height) {};
	virtual string self() const = 0;
};

class ArtChair :public AbstractChair {
private:
	double fee = 1.1;
	double length = 5.4;
	double width = 4.5;
	double height = 2.3;
public:
	double getCost() { return fee; }
	void getInfo() {
		cout << "艺术类型椅子的长宽高为：" << endl;
		cout << length << " " << width << " " << height << endl;
	}
	string self() const  override {
		return "This is art chair ";
	}
	void modify(int _length, int _width, int _height) {
		length = _length;
		width = _width;
		height = _height;
		cout << "修改椅子的长宽高" << endl;
	}
};

class ModernChair :public AbstractChair {
private:
	double fee = 1.2;
	double length = 5.7;
	double width = 2.5;
	double height = 2.4;
public:
	void getInfo() {
		cout << "现代类型椅子的长宽高为：" << endl;
		cout << length << " " << width << " " << height << endl;
	}
	double getCost() { return fee; }
	string self() const  override {
		return "This is modern chair ";
	}
	void modify(int _length, int _width, int _height) {
		length = _length;
		width = _width;
		height = _height;
		cout << "修改椅子的长宽高" << endl;
	}
};

class VictorianChair :public AbstractChair {
private:
	double fee = 1.3;
	double length = 6.4;
	double width = 4.6;
	double height = 3.3;
public:
	void getInfo() {
		cout << "维多利亚类型椅子的长宽高为：" << endl;
		cout << length << " " << width << " " << height << endl;
	}
	double getCost() { return fee; }
	string self() const  override {
		return "This is victorian chair ";
	}
	void modify(int _length, int _width, int _height) {
		length = _length;
		width = _width;
		height = _height;
		cout << "修改椅子的长宽高" << endl;
	}
};
