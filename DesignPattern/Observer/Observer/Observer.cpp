#include"Observer.h"

Observer::Observer(std::string _name,std::string _job):name(_name),job(_job){
	std::cout << name << "�Ƕ�����,ְҵ��:" << job << "\n";
}

Observer::~Observer() {
	//std::cout << "bye ���Ƕ�����;" << name << "\n";
}

void Observer::Update(const std::string& message,std::string name) {
	std::cout << "��ã�" << name << " ��һ���µ���Ϣ: " << message << "\n";
}

void Observer::RemovePublisher(Publisher* pub) {
	 subject.erase(pub); 
	 pub->UnSubscribe(this);
}

void Observer::AddPublisher(Publisher* pub) {
	 subject.insert(pub);
	 pub->Subscribe(this);
}

void Observer::Traverse() {
	for (auto it : subject) {
		std::cout << it->GetName() << " ";
	}std::cout << "\n";
}
