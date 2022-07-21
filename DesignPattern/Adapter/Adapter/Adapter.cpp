#include"Adapter.h"
#include<string>

void AmericanSocketAdapter::GermanyVoltage(GermanySocket* socket) {
	std::cout << "�¹������ĵ�ѹת��Ϊ������ѹ:" << "\n";
	int voltage = socket->GetVoltage();
	voltage = voltage / 2 + 10;
	socket->SetVoltage(voltage);
	std::cout << "ת��������ĵ�ѹ:" << socket->GetVoltage() << "\n";
}

void AmericanSocketAdapter::AmericanVoltage(AmericanSocket* socket) {
	std::cout << "���������ĵ�ѹת��Ϊ�¹���ѹ:" << "\n";
	int voltage = socket->GetVoltage();
	voltage = voltage * 2 - 20;
	socket->SetVoltage(voltage);
	std::cout << "ת��������ĵ�ѹ:" << socket->GetVoltage() << "\n";
}

void AmericanSocketAdapter::AVoltage() {
	voltage = 110;
	std::cout << "���������ĵ�ѹ�޸�Ϊ������ѹ" << "\n";
	std::cout << "��������ѹΪ:" << GetVoltage() << "\n";
}

void AmericanSocketAdapter::CVoltage() {
	voltage = 220;
	std::cout << "���������ĵ�ѹ�޸�Ϊ�й���ѹ" << "\n";
	std::cout << "��������ѹΪ:" << GetVoltage() << "\n";
}

void AmericanSocketAdapter::GVoltage() {
	voltage = 220;
	std::cout << "���������ĵ�ѹ�޸�Ϊ�¹���ѹ" << "\n";
	std::cout << "��������ѹΪ:" << GetVoltage() << "\n";
}

void AmericanSocketAdapter::ConversionPins(Plug* plug) {
	std::cout << "���ڲ�ͷ��������Ϊ:" << plug->GetPins() << "\n";
	std::cout << "����Ҫת����������:(Y/N)" << "\n";
	int pins;
	std::string input;
	std::cin >> input;
	while (input != "Y" && input != "N") {
		std::cout << "�����������������:(Y/N)" << "\n";
		std::cin >> input;
	}
	if (input == "N") exit(0);
	else {
		std::cout << "����ת����������:" << "\n";
		std::cin >> pins;
		if(pins == plug->GetPins()) {
			std::cout << "��������������ͬ������������:" << "\n";
			std::cin >> pins;
		}
		PinsTo = pins;
		std::cout << "ת���������������Ϊ:" << PinsTo << ":\n";
	}
}