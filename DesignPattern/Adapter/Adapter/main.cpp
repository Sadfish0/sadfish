#include <iostream>
#include <memory>
#include"Adapter.h"



void UseAmericanPlug(AmericanSocket* socket)
{
	std::cout << socket->AmericanInput()<<"\n";

}
void UseChinesePlug(ChineseSocket *socket)
{
	std::cout << socket->ChineseInput();
}

void UseGermanyPlug(GermanySocket* socket)
{
	std::cout << socket->GermanyInput()<<"\n";
	                                                     //�¹���ͷ�������������ϣ��¹���ѹת��Ϊ������ѹ
}



int main()
{
	AmericanSocket* americanSocket = new AmericanSocket();
	//std::shared_ptr<AmericanSocket> americanSocket(new AmericanSocket());
	UseAmericanPlug(americanSocket);                                                    //������ͷ����������
	std::cout << "\n";

	AmericanSocket* americanSocket_c = new AmericanSocket();
	AmericanSocketAdapter* americanSocketAdapter_c = new AmericanSocketAdapter(americanSocket_c);
	//std::shared_ptr<ChineseSocket> chineseSocket(new ChineseSocket());
	//std::shared_ptr<ChineseSocketAdapter> chineseSocketAdapter(new ChineseSocketAdapter(chineseSocket.get()));
	UseChinesePlug(americanSocketAdapter_c);                                            //�й���ͷ����������(ʵ��������������)  
	std::cout << ":\n";


	AmericanSocket* americanSocket_g = new AmericanSocket();
	AmericanSocketAdapter* americanSocketAdapter_g = new AmericanSocketAdapter(americanSocket_g);
	UseGermanyPlug(americanSocketAdapter_g);                                            //�¹���ͷ����������  ������->�²���
	std::cout << "\n" << "\n";


	americanSocketAdapter_g->AmericanVoltage(americanSocket);                           //��������������ĵ�ѹת��Ϊ�¹��ĵ�ѹ
	americanSocketAdapter_g->GVoltage();                                                //�޸��������ĵ�ѹ
	std::cout << "\n"<<"\n";

	Plug* americanPlug = new AmericanPlug();
	americanPlug->SetPins(2);
	AmericanSocketAdapter* con = new AmericanSocketAdapter(nullptr);
	con->ConversionPins(americanPlug);

	delete americanSocket;
	delete americanSocket_c;
	delete americanSocket_g;
	delete americanSocketAdapter_c;
	delete americanSocketAdapter_g;
	delete americanPlug;
	delete con;



	/*Plug* americanPlug = new AmericanPlug();
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
	delete con;*/

	return 0;
}
