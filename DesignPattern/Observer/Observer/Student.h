#include "Observer.h"

class Student :public Observer {
public:
	Student();
	Student(std::string _name);
	~Student();
	void SetSex(std::string _sex) { sex = _sex; }
	void SetAge(int _age) { age = _age; }
	void Update(const std::string& message, std::string name) override;
	//void Traverse();
private:
	std::string sex;
	int age=0;
};