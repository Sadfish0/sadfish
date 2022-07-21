#pragma once
#include<iostream>
class ChineseSocket {
private:
	int voltage = 220;
	int pins;
public:
	virtual ~ChineseSocket() = default;
	virtual std::string ChineseInput() const;
	int GetVoltage() { return voltage; }
	void SetVoltage(int _voltage) { voltage = _voltage; }
	virtual void ChineseVoltage(ChineseSocket* socket);
	int GetPins() { return  pins; }
	void SetPins(int _pins) { pins = _pins; }
};






