#pragma once
#include <memory>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include "LuckyNumber.h"
#include "LRU.h"
class LuckyNumber;
class Proxy :public Number{
private:
	std::shared_ptr<LuckyNumber> luckyNumber =nullptr;
	bool CheckAccess(std::string animal) const;
	//std::unordered_map<std::string, int > cache;
	std::unordered_set<std::string > err_cache; 
	std::shared_ptr<LRU> cache = nullptr;
public:
	Proxy() :luckyNumber(new LuckyNumber()) { cache = std::make_shared<LRU>(); }
	int generate(std::string animal) override;
	void set_permissions(std::string animal );
};
