#include"GermanySocket.h"

std::string GermanySocket::GermanyInput() const {
	return "Iuput Germany Standard Socket.";
}

void GermanySocket::GermanyVoltage(GermanySocket *socket)  {
 	std::cout << "德国插座的电压为:" <<socket-> GetVoltage()<< "\n";
}
