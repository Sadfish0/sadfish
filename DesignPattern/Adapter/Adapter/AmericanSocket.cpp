#include"AmericanSocket.h"

std::string AmericanSocket::AmericanInput() const {
	return "Iuput American Standard Socket.";
}

void AmericanSocket::AmericanVoltage(AmericanSocket* socket)  {
	std::cout << "美国插座的电压为:" <<socket->GetVoltage() ;
}