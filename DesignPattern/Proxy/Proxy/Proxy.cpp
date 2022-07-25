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
		std::cout <<animal<< "û��Ȩ��!" << "\n";
		exit(0);
	}
	/*if (cache.count(animal)) {
		std::cout << "ʹ�û���:\n";
		return cache[animal];
	}*/
	if (cache->_count(animal)) {
		std::cout << "ʹ�û���:\n";
		return cache->GetAnimal(animal);
	}
	else {
		int result = luckyNumber->generate(animal);
		cache->_insert(animal,result);
		if (result == 0) err_cache.insert(animal);       //��������string�������ݿ���
		return result;                                        //�����ø�stringû��Ȩ��
	}return 0;
}