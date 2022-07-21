#pragma once
#include<list>
#include<string>
#include"Observer.h"

class Observer;
class Publisher {
public:
	virtual ~Publisher();
	void Subscribe(Observer* observer);
	void UnSubscribe(Observer* observer);
	void Notify();
	void Publish(std::string _message);
	void SetName(std::string _name) { name = _name; }
	void SetJob(std::string _job) { job = _job; }
	std::string GetName() { return name; }
	std::string GetJob() { return job; }
private:
	std::list<Observer*> ListObserver;
	std::string message;
	std::string name;
	std::string job;
};