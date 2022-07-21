#pragma once
#include<iostream>
class AmericanSocket {
private:
	int voltage = 120;
	int pins;
public:
	virtual ~AmericanSocket() = default;
	virtual std::string AmericanInput()const;
	int GetVoltage() { return voltage; }
	void SetVoltage(int _voltage) { voltage = _voltage; } 
	virtual void AmericanVoltage(AmericanSocket* socket) ;
	int GetPins() {return  pins; }
	void SetPins(int _pins) { pins = _pins; }
};