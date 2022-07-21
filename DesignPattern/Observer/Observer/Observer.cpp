#include"Observer.h"

Observer::Observer(std::string _name,std::string _job):name(_name),job(_job){
	std::cout << name << "是订阅者,职业是:" << job << "\n";
}

Observer::~Observer() {
	//std::cout << "bye 我是订阅者;" << name << "\n";
}

void Observer::Update(const std::string& message,std::string name) {
	std::cout << "你好，" << name << " 有一个新的信息: " << message << "\n";
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
