
#include "Adapter.h"
void AmericanPlug::UsePlug() { //������ͷ����������
	AmericanSocket* americanSocket = new AmericanSocket();
	//std::shared_ptr<AmericanSocket> americanSocket(new AmericanSocket());    
	std::cout<<americanSocket->AmericanInput() << "\n";
	
	delete americanSocket;
	std::cout << "\n";
}