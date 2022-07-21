#include"Plug.h"

class AmericanPlug:public Plug{
private:
	int pins=2;
public:
	int GetPins() { return pins; }
	void SetPins(int _pins) { pins = _pins; }
	void UsePlug();
};