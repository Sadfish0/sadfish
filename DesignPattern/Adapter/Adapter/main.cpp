#include <iostream>
#include <memory>
#include"Adapter.h"


/*
void UseAmericanPlug(AmericanSocket* socket)
{
	std::cout << socket->AmericanInput()<<"\n";
	socket->AmericanVoltage(socket);                                                   
}
void UseChinesePlug(ChineseSocket *socket)
{
	std::cout << socket->ChineseInput();
}

void UseGermanyPlug(GermanySocket* socket)
{
	std::cout << socket->GermanyInput()<<"\n";
	socket->GermanyVoltage(socket);                                                     //德国插头插在美国插座上，德国电压转化为美国电压
}
*/


int main()
{
	/*AmericanSocket* americanSocket = new AmericanSocket();
	//std::shared_ptr<AmericanSocket> americanSocket(new AmericanSocket());
	UseAmericanPlug(americanSocket);                                                    //美国插头用美国插座
	std::cout << "\n";

	AmericanSocket* americanSocket_c = new AmericanSocket();
	AmericanSocketAdapter* americanSocketAdapter_c = new AmericanSocketAdapter(americanSocket_c);
	//std::shared_ptr<ChineseSocket> chineseSocket(new ChineseSocket());
	//std::shared_ptr<ChineseSocketAdapter> chineseSocketAdapter(new ChineseSocketAdapter(chineseSocket.get()));
	UseChinesePlug(americanSocketAdapter_c);                                            //中国插头用美国插座(实际上是用适配器)  
	std::cout << ":\n";


	AmericanSocket* americanSocket_g = new AmericanSocket();
	AmericanSocketAdapter* americanSocketAdapter_g = new AmericanSocketAdapter(americanSocket_g);
	UseGermanyPlug(americanSocketAdapter_g);                                            //德国插头用美国插座  美插座->德插座
	delete americanSocket;
	delete americanSocket_c;
	delete americanSocket_g;
	delete americanSocketAdapter_c;
	delete americanSocketAdapter_g;*/

	Plug* americanPlug = new AmericanPlug();
	Plug* chinesePlug = new ChinesePlug();
	Plug* germanyPlug = new GermanyPlug();

	
	americanPlug->UsePlug();
	chinesePlug->UsePlug();
	germanyPlug->UsePlug();

	americanPlug->SetPins(2);
	AmericanSocketAdapter* con = new AmericanSocketAdapter(nullptr);
	con->ConversionPins(americanPlug);

	delete americanPlug;
	delete chinesePlug;
	delete germanyPlug;
	delete con;

	return 0;
}
