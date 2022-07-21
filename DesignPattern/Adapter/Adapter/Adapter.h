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
	int PinsTo;																			//输出引脚
public:
	int GetVoltage() { return voltage; }
	AmericanSocketAdapter(AmericanSocket* _Asocket):Asocket(_Asocket){}
	std::string ChineseInput() const override { return Asocket->AmericanInput(); }
	std::string GermanyInput() const override { return Asocket->AmericanInput(); }
	void GermanyVoltage(GermanySocket* socket) ;                                       //适配器可以改变德国插座的电压
	void AmericanVoltage(AmericanSocket* socket) ;                                     //适配器可以改变美国插座的电压
	void GVoltage() ;                                                                  //适配器可以修改自己的电压为其他国家的电压
	void CVoltage() ;
	void AVoltage() ;
	void ConversionPins(Plug * plug);
};





