
#include "Adapter.h"
void AmericanPlug::UsePlug() { //美国插头用美国插座
	AmericanSocket* americanSocket = new AmericanSocket();
	//std::shared_ptr<AmericanSocket> americanSocket(new AmericanSocket());    
	std::cout<<americanSocket->AmericanInput() << "\n";
	
	delete americanSocket;
	std::cout << "\n";
}