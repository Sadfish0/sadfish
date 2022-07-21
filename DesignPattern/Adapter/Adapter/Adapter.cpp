#include"Adapter.h"
#include<string>

void AmericanSocketAdapter::GermanyVoltage(GermanySocket* socket) {
	std::cout << "德国插座的电压转化为美国电压:" << "\n";
	int voltage = socket->GetVoltage();
	voltage = voltage / 2 + 10;
	socket->SetVoltage(voltage);
	std::cout << "转换后插座的电压:" << socket->GetVoltage() << "\n";
}

void AmericanSocketAdapter::AmericanVoltage(AmericanSocket* socket) {
	std::cout << "美国插座的电压转化为德国电压:" << "\n";
	int voltage = socket->GetVoltage();
	voltage = voltage * 2 - 20;
	socket->SetVoltage(voltage);
	std::cout << "转换后插座的电压:" << socket->GetVoltage() << "\n";
}

void AmericanSocketAdapter::AVoltage() {
	voltage = 110;
	std::cout << "将适配器的电压修改为美国电压" << "\n";
	std::cout << "适配器电压为:" << GetVoltage() << "\n";
}

void AmericanSocketAdapter::CVoltage() {
	voltage = 220;
	std::cout << "将适配器的电压修改为中国电压" << "\n";
	std::cout << "适配器电压为:" << GetVoltage() << "\n";
}

void AmericanSocketAdapter::GVoltage() {
	voltage = 220;
	std::cout << "将适配器的电压修改为德国电压" << "\n";
	std::cout << "适配器电压为:" << GetVoltage() << "\n";
}

void AmericanSocketAdapter::ConversionPins(Plug* plug) {
	std::cout << "现在插头的引脚数为:" << plug->GetPins() << "\n";
	std::cout << "你想要转换引脚数吗:(Y/N)" << "\n";
	int pins;
	std::string input;
	std::cin >> input;
	while (input != "Y" && input != "N") {
		std::cout << "输入错误，请重新输入:(Y/N)" << "\n";
		std::cin >> input;
	}
	if (input == "N") exit(0);
	else {
		std::cout << "输入转换的引脚数:" << "\n";
		std::cin >> pins;
		if(pins == plug->GetPins()) {
			std::cout << "与现在引脚数相同，请重新输入:" << "\n";
			std::cin >> pins;
		}
		PinsTo = pins;
		std::cout << "转换器的输出引脚数为:" << PinsTo << ":\n";
	}
}