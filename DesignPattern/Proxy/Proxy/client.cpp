#include<iostream>
#include "Proxy.h"

int main()
{
	std::cout << "Executing the client code with a real operation:\n";
	std::shared_ptr<LuckyNumber> luckynumber = std::make_shared<LuckyNumber>();
	std::cout<<luckynumber->generate("Rat")<<"\n";
	std::cout << "\n";


	std::cout << "Executing the same client code with a proxy:\n";
	std::shared_ptr<Proxy> proxy = std::make_shared<Proxy>();
	std::cout<<proxy->generate("Horse")<<"\n";
	std::cout<<proxy->generate("Ox")<<"\n";
	std::cout<<proxy->generate("Ox")<<"\n";
	std::cout << proxy->generate("Horse") << "\n";
	std::cout << "\n";



	std::cout << "设置没有权限的animal(请输入):\n";
	std::string input;
	std::cin >> input;
	proxy->set_permissions(input);
	proxy->generate(input);
	return 0;
}