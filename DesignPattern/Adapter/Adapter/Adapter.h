#pragma once
#include"ChineseSocket.h"
#include"AmericanSocket.h"
#include"GermanySocket.h"
#include "AmericanPlug.h"
#include "ChinesePlug.h"
#include "GermanyPlug.h"

class AmericanSocketAdapter : public ChineseSocket ,public GermanySocket,public AmericanSocket{
private:
	AmericanSocket* Asocket;
	int voltage=0;
	int PinsTo;																			//�������
public:
	int GetVoltage() { return voltage; }
	AmericanSocketAdapter(AmericanSocket* _Asocket):Asocket(_Asocket){}
	std::string ChineseInput() const override { return Asocket->AmericanInput(); }
	std::string GermanyInput() const override { return Asocket->AmericanInput(); }
	void GermanyVoltage(GermanySocket* socket) ;                                       //���������Ըı�¹������ĵ�ѹ
	void AmericanVoltage(AmericanSocket* socket) ;                                     //���������Ըı����������ĵ�ѹ
	void GVoltage() ;                                                                  //�����������޸��Լ��ĵ�ѹΪ�������ҵĵ�ѹ
	void CVoltage() ;
	void AVoltage() ;
	void ConversionPins(Plug * plug);
};





