#pragma once
#include"Plug.h"

class GermanyPlug :public Plug{
private:
	int pins;
public:
	int GetPins() { return pins; }
	void SetPins(int _pins) { pins = _pins; }
	void UsePlug();
};