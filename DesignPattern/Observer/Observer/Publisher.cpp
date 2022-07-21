#include"Publisher.h"

 Publisher::~Publisher() {
	 //std::cout << "bye, ���Ƿ�����" <<name<< "\n";
}

 void Publisher::Subscribe(Observer* observer) {
	 ListObserver.push_back(observer);
	 std::cout << observer->GetName() << "������" << name << "\n";
}

 void Publisher::UnSubscribe(Observer* observer) {
	 ListObserver.remove(observer);
	 std::cout << observer->GetName() << "ȡ���˶�" << name << "�Ķ���" << "\n";
 }

 void Publisher::Notify() {
	 std::cout << "������" << ListObserver.size() << "���˶���" << "\n";
	 auto iter = ListObserver.begin();
	 while (iter != ListObserver.end()) {
		 (*iter)->Update(message,name);
		 ++iter;
	 }
 }

 void Publisher::Publish(std::string _message) {
	 this->message = _message;
	 Notify();
}