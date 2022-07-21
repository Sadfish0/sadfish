#include"Publisher.h"

 Publisher::~Publisher() {
	 //std::cout << "bye, 我是发布者" <<name<< "\n";
}

 void Publisher::Subscribe(Observer* observer) {
	 ListObserver.push_back(observer);
	 std::cout << observer->GetName() << "订阅了" << name << "\n";
}

 void Publisher::UnSubscribe(Observer* observer) {
	 ListObserver.remove(observer);
	 std::cout << observer->GetName() << "取消了对" << name << "的订阅" << "\n";
 }

 void Publisher::Notify() {
	 std::cout << "这里有" << ListObserver.size() << "个人订阅" << "\n";
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