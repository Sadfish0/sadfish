
#include "Adapter.h"

void ChinesePlug::UsePlug() { //�й���ͷ����������(ʵ��������������)  
	AmericanSocket* americanSocket_c = new AmericanSocket();
	AmericanSocketAdapter* americanSocketAdapter_c = new AmericanSocketAdapter(americanSocket_c);
	//std::shared_ptr<ChineseSocket> chineseSocket(new ChineseSocket());
	//std::shared_ptr<ChineseSocketAdapter> chineseSocketAdapter(new ChineseSocketAdapter(chineseSocket.get()));
	std::cout << americanSocketAdapter_c->ChineseInput();

	delete americanSocket_c;
	delete americanSocketAdapter_c;

	std::cout << ":\n";
}