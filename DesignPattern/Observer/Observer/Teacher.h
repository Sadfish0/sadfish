#include"Publisher.h"
class Teacher :public Publisher {
public:
	Teacher(std::string _name) { SetName(_name); }
	~Teacher();
	void SetCourse(std::string _course) { course = _course; }
	void SetSex(std::string _sex) { sex = _sex; }
	std::string GetSex() { return sex; }
	std::string GetCourse() { return course; }
private:
	
	std::string sex;
	std::string course="ÔİÎŞÑ¡Ôñ";
};