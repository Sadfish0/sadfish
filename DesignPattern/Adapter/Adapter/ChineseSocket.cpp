#include"ChineseSocket.h"


std::string ChineseSocket::ChineseInput() const {
	return "Iuput Chinese Standard Socket.";
}

void ChineseSocket::ChineseVoltage(ChineseSocket* socket) {
	std::cout << "�й������ĵ�ѹΪ:" << socket->GetVoltage() << "\n";
}
