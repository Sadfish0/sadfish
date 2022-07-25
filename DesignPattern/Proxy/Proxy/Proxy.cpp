#include "Proxy.h"
#include <iostream>
void Proxy::set_permissions(std::string animal) {
	err_cache.insert(animal);
}
bool Proxy::CheckAccess(std::string animal) const {
	if(err_cache.count(animal) )return false;
	return true;
}
int Proxy::generate(std::string animal)  {
	if (luckyNumber == nullptr) {
		luckyNumber = std::make_shared<LuckyNumber>();
	}
	bool check=CheckAccess(animal );
	if (!check) {
		std::cout <<animal<< "没有权限!" << "\n";
		exit(0);
	}
	/*if (cache.count(animal)) {
		std::cout << "使用缓存:\n";
		return cache[animal];
	}*/
	if (cache->_count(animal)) {
		std::cout << "使用缓存:\n";
		return cache->GetAnimal(animal);
	}
	else {
		int result = luckyNumber->generate(animal);
		cache->_insert(animal,result);
		if (result == 0) err_cache.insert(animal);       //如果输入的string不在数据库中
		return result;                                        //则设置该string没有权限
	}return 0;
}