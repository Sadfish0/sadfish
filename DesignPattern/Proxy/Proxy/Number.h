#pragma once
#include<string>
class Number {
public:
	virtual int generate(std::string animal) = 0;
	virtual ~Number();
};
