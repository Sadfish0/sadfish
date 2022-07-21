#pragma once

class Plug {
private:
	int pins = 0;
public:
	virtual int GetPins() { return pins; }
	virtual void SetPins(int _pins) { pins = _pins; }
	virtual void UsePlug(){};
};

