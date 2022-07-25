#pragma once
#include<memory>
#include<unordered_map>
#include<vector>
class LRU {
private:
	int size=0;           
	int capacity=100;
	std::unordered_map<std::string, int > c;            //真正的缓存
	//std::unordered_map<std::string, int > t;            string的访问频次
	std::vector<std::string> time;                           //按照时间排序     
public:
	bool _count(std::string animal);
	void _insert(std::string animal,int number);
	void SetCapacity(int _capacity);
	int GetSize();
	int GetCapacity();
	int GetAnimal(std::string animal);
};