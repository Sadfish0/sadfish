
#include "Adapter.h"

void ChinesePlug::UsePlug() { //中国插头用美国插座(实际上是用适配器)  
	AmericanSocket* americanSocket_c = new AmericanSocket();
	AmericanSocketAdapter* americanSocketAdapter_c = new AmericanSocketAdapter(americanSocket_c);
	//std::shared_ptr<ChineseSocket> chineseSocket(new ChineseSocket());
	//std::shared_ptr<ChineseSocketAdapter> chineseSocketAdapter(new ChineseSocketAdapter(chineseSocket.get()));
	std::cout << americanSocketAdapter_c->ChineseInput();

	delete americanSocket_c;
	delete americanSocketAdapter_c;

	std::cout << ":\n";
}