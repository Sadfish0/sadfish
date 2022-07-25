#include "LRU.h"
bool LRU::_count(std::string animal ) {
	if (c.count(animal)) {
		auto it=remove(time.begin(),time.end(),animal);
		time.erase(it, time.end());
		time.insert(time.begin(), animal);
		return ;
	}
	return false;
}

void  LRU::_insert(std::string animal,int number) {
	if (size <capacity) {
		c.insert(std::pair<std::string, int >(animal, number));
		size++;
		time.insert(time.begin(), animal);
	}
	else {
		c.erase(time.back());
		time.pop_back();
		c.insert(std::pair<std::string, int >(animal, number));
		time.insert(time.begin(), animal);
		/*std::string del; int num = 999;
		for (auto it : c) {
			if (it.second < num) {
				num = it.second;
				del = it.first;
			}
		}
		c.erase(del);
		
		c.insert(std::pair<std::string, int >(animal, number));*/
	}
}

void LRU::SetCapacity(int _capacity)
{
	capacity = _capacity;
}



int LRU::GetSize()
{
	return size;
}

int LRU::GetCapacity()
{
	return capacity;
}

int LRU::GetAnimal(std::string animal)
{
	return c[animal];
}
