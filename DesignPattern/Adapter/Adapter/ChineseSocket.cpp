#include"ChineseSocket.h"


std::string ChineseSocket::ChineseInput() const {
	return "Iuput Chinese Standard Socket.";
}

void ChineseSocket::ChineseVoltage(ChineseSocket* socket) {
	std::cout << "中国插座的电压为:" << socket->GetVoltage() << "\n";
}
