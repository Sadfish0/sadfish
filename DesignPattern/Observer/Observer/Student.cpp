#include"Student.h"

Student::Student()
{
}

Student::Student(std::string _name)
{
	SetName(_name);
}

void Student::Update(const std::string& message, std::string name) {
	std::cout << "��ã�" << GetName() << " ��һ���µ���Ϣ: " << message << " from  " << name << ":\n";
}

Student::~Student() {
	//std::cout << "bye������ѧ��" << "\n";
 }