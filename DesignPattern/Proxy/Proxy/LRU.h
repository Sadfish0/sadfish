#pragma once
#include<memory>
#include<unordered_map>
#include<vector>
class LRU {
private:
	int size=0;           
	int capacity=100;
	std::unordered_map<std::string, int > c;            //�����Ļ���
	//std::unordered_map<std::string, int > t;            string�ķ���Ƶ��
	std::vector<std::string> time;                           //����ʱ������     
public:
	bool _count(std::string animal);
	void _insert(std::string animal,int number);
	void SetCapacity(int _capacity);
	int GetSize();
	int GetCapacity();
	int GetAnimal(std::string animal);
};