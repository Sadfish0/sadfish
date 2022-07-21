#include"Observer.h"
#include "Publisher.h"

class Docter :public Publisher {
public:
	Docter() {}
	Docter(std::string _name) { SetName(_name); }
	~Docter();
	void SetCategory(std::string _category) { category = _category; }
	void SetSex(std::string _sex) { sex = _sex; }
	std::string GetSex() { return sex; }
	std::string GetCategory() { return category; }
private:
	std::string sex;
	std::string category;
};