#include"Student.h"

Student::Student()
{
}

Student::Student(std::string _name)
{
	SetName(_name);
}

void Student::Update(const std::string& message, std::string name) {
	std::cout << "你好，" << GetName() << " 有一个新的信息: " << message << " from  " << name << ":\n";
}

Student::~Student() {
	//std::cout << "bye，我是学生" << "\n";
 }