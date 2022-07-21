#pragma once
#include<iostream>
#include<string>
#include<unordered_set>
#include "Publisher.h"

class Publisher;
class Observer {
public:
	Observer(){}
	Observer(std::string _name, std::string _job);
	virtual ~Observer();
	virtual void Update(const std::string& message,std::string name);
	void RemovePublisher(Publisher* pub);
	void AddPublisher(Publisher* pub);
	void Traverse();
	void SetName(std::string _name) { name = _name; }
	void SetJob(std::string _job) { job = _job; }
	std::string GetName() { return name; }
	std::string GetJob() { return job; }
private:
	std::unordered_set<Publisher*> subject;
	std::string name;
	std::string job;
};