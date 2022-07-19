#pragma once
#include"Chair.h"
#include"Sofa.h"
#include"Table.h"
class AbstractFactory {                                                                           //���󹤳�
public:
	virtual AbstractChair* CreateChair() const = 0;
	virtual AbstractSofa* CreateSofa() const = 0;
	virtual AbstractTable* CreateTable() const = 0;
};

class ArtFactory :public AbstractFactory {															//�����������ͼҾߵĹ��������������͵����ӣ��������͵�ɳ��������
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

class ModernFactory :public AbstractFactory {                                                         //�ִ�����
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

class VictorianFactory :public AbstractFactory {                                                       //ά�����ǹ���
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
