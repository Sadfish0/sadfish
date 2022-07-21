#include"Plug.h"

class ChinesePlug : public Plug {
private:
	int pins=3;
public:
	int GetPins() { return pins; }
	void SetPins(int _pins) { pins = _pins; }
	void UsePlug();
};