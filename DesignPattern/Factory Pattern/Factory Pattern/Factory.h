#pragma once
#include"Chair.h"
#include"Sofa.h"
#include"Table.h"
class AbstractFactory {                                                                           //抽象工厂
public:
	virtual AbstractChair* CreateChair() const = 0;
	virtual AbstractSofa* CreateSofa() const = 0;
	virtual AbstractTable* CreateTable() const = 0;
};

class ArtFactory :public AbstractFactory {															//制作艺术类型家具的工厂，如艺术类型的椅子，艺术类型的沙发和桌子
public:
	AbstractChair* CreateChair() const override {
		return new ArtChair();
	}
	AbstractSofa* CreateSofa() const override {
		return new ArtSofa();
	}
	AbstractTable* CreateTable() const override {
		return new ArtTable();
	}
};

class ModernFactory :public AbstractFactory {                                                         //现代工厂
public:
	AbstractChair* CreateChair() const override {
		return new ModernChair();
	}
	AbstractSofa* CreateSofa() const override {
		return new ModernSofa();
	}
	AbstractTable* CreateTable() const override {
		return new ModernTable();
	}
};

class VictorianFactory :public AbstractFactory {                                                       //维多利亚工厂
public:
	AbstractChair* CreateChair() const override {
		return new VictorianChair();
	}
	AbstractSofa* CreateSofa() const override {
		return new VictorianSofa();
	}
	AbstractTable* CreateTable() const override {
		return new VictorianTable();
	}
};
