#pragma once
#include"Number.h"

class LuckyNumber :public Number {
public:
	int generate(std::string animal) override;
};