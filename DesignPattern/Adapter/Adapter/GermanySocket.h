#pragma once
#include<iostream>
class GermanySocket {
private:
	int voltage = 220;
	int pins;
public:
	virtual ~GermanySocket() = default;
	virtual  std::string GermanyInput()const;
	int GetVoltage() { return voltage; }
	void SetVoltage(int _voltage) { voltage = _voltage; }
	virtual void GermanyVoltage(GermanySocket* socket) ;
	int GetPins() { return  pins; }
	void SetPins(int _pins) { pins = _pins; }
};