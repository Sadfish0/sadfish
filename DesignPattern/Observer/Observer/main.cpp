#include<iostream>
#include<unordered_set>
#include"Docter.h"
#include"Student.h"
#include"Teacher.h"

std::shared_ptr<Teacher> Youmin = std::make_shared<Teacher>(Teacher("Youmin"));
std::shared_ptr<Teacher> SiHan = std::make_shared<Teacher>(Teacher("SiHan"));
std::shared_ptr<Teacher> Bob = std::make_shared<Teacher>(Teacher("Bob"));

std::shared_ptr<Student> Ali = std::make_shared<Student>(Student("Ali"));
std::shared_ptr<Student> Robin = std::make_shared<Student>(Student("Robin"));

std::shared_ptr<Docter> Jay = std::make_shared<Docter>(Docter("Jay"));

std::unordered_set<std::string > job = { "Docter","Teacher","Student" };

void DocterOperation()
{
	std::string message;
	std::cout << "������Ҫ֪ͨ����Ϣ:" << "\n";
	std::cin >> message;
	Jay->Publish(message);
}

void TeacherOperation()
{
	std::unordered_set<std::string > _name = { "Youmin","SiHan" };
	std::string name;
	std::cout << "�������������" << " \n";
	std::cin >> name;
	while (!_name.count(name)) {
		std::cout << "��ʱû�������ʦŶ! �����������������" << "\n";
		std::cin >> name;
		if (name == "esc") exit(0);
	}
	std::string course;
	std::cout << "���������̵Ŀγ�:" << "\n";
	std::cin >> course;
	std::string work;
	std::cout << "������ҵ" << "\n";
	std::cin >> work;
	if (name == "Youmin") Youmin->Publish(work);
	else SiHan->Publish(work);
}

void StudentOperation()
{
	std::cout << "Ali���ĵ���:" << "\n";
	Ali->Traverse();
	std::cout << "Robin���ĵ���:" << "\n";
	Robin->Traverse();
}

void Operation()
{
	std::string identity;
	std::cout << "���������Job(Docter or Student or Teacher)?" << "\n";
	std::cin >> identity;
	while (!job.count(identity)) {
		std::cout << "û�����jobŶ������������" << "\n";
		std::cin >> identity;
	}
	if (identity == "Docter") DocterOperation();
	else if (identity == "Student") StudentOperation();
	else TeacherOperation();
}

int main()
{
	Ali->AddPublisher(Youmin.get());
	Ali->AddPublisher(SiHan.get());
	Robin->AddPublisher(SiHan.get());
	Robin->AddPublisher(Bob.get());
	Robin->AddPublisher(Jay.get());
	std::cout << "\n\n";
	Youmin->Publish("�������Ϸ");
	Jay->Publish("�������");
	SiHan->Publish("����ҲҪ����Ϸ");
	std::cout << "\n\n";
	
	Operation();
	std::cout << "\n";
	Ali->RemovePublisher(SiHan.get());
	Ali->RemovePublisher(Jay.get());
	return 0;
}