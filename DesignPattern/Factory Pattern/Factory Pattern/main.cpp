#include<iostream>
#include<string>
#include<map>
#include"Factory.h"
#include"Logistics.h"
using namespace std;

void FactoryClient(const AbstractFactory& factory)													 //根据传入的参数可以得知，具体用哪一种工厂制作
{
	AbstractChair *chair = factory.CreateChair();													 //每种工厂制作的椅子，沙发，桌子
	AbstractSofa *sofa = factory.CreateSofa();
	AbstractTable* table = factory.CreateTable();
	cout << "the factory products and the cost:" << endl;
	cout<<chair->self()<<"cost:" << chair->getCost() << endl;                  
	cout<<sofa->self()<<"cost:" << sofa->getCost() << endl;
	cout<<table->self()<<"cost:"<<table->getCost() << endl<<endl;
	cout << "椅子的尺寸" << endl;
	chair->getInfo();
	delete chair;
	delete sofa;
	delete table;

}
 

void LogisticsClient()																					//物流查询函数
{
	string type;
	cout << "请输入你查询的物流方式: sea road or sky" << endl;
	while (cin >> type) {
		if (type != "sea" && type != "road" && type != "sky") {          
			cout << "输入错误，请重新输入:" << endl;
			continue;
		}
		else {
			LogisticsCo* slog = new LogisticsCo();                       
			Logistics* log = slog->SelectLogistics(type);
			Transport* transport = log->CreateTransport();
			cout << transport->Deliver();
			delete transport;
			break;
		}
	}

}

int  LogisticsCost(string type)																			//物流花费函数
{
	LogisticsCo* slog = new LogisticsCo();
	Logistics* log = slog->SelectLogistics(type);
	Transport* transport = log->CreateTransport();
	int  result = transport->getCost();
	delete transport;
	return result;
}

double FurnitureCost(string style,string furniture)                          //选择的家具价格
{
	if (style == "art") {
		ArtFactory* art = new ArtFactory();
		if (furniture == "chair") {
			AbstractChair* chair = art->CreateChair();
			return chair->getCost();
		}
		else if (furniture == "sofa") {
			AbstractSofa* sofa = art->CreateSofa();
			return sofa->getCost();
		}
		else {
			AbstractTable* table = art->CreateTable();
			return table->getCost();
		}
	}
	else if (style == "modern") {
		ModernFactory* modern= new ModernFactory();
		if (furniture == "chair") {
			AbstractChair* chair = modern->CreateChair();
			return chair->getCost();
		}
		else if (furniture == "sofa") {
			AbstractSofa* sofa = modern->CreateSofa();
			return sofa->getCost();
		}
		else {
			AbstractTable* table = modern->CreateTable();
			return table->getCost();
		}
	}
	else {
		VictorianFactory* vic = new VictorianFactory();
		if (furniture == "chair") {
			AbstractChair* chair = vic->CreateChair();
			return chair->getCost();
		}
		else if (furniture == "sofa") {
			AbstractSofa* sofa = vic->CreateSofa();
			return sofa->getCost();
		}
		else {
			AbstractTable* table = vic->CreateTable();
			return table->getCost();
		}
	}
	return 0;
}                 

void Client()																							//根据用户选择的家具以及类型及其物流方式，获取总的花费
{
	string input;
	string type, style, furniture;
	while (true) {
		cout << "do you want to purchase some furniture ? (Y/N)" << endl;
		cin >> input;
		if (input == "NOT" || input == "N") {
			break;
		}
		cout << "what style do you want ? (art modern or victorian?)" << endl;
		cin >> style;
		while (style != "art" && style != "modern" && style != "victorian") {
			if (style == "esc") exit(0);
			else {
				cout << "input error! and please input again :" << endl;
				cin >> style;
			}
		}
		cout << "what furniture do you want ?(chair or sofa or table )" << endl;
		cin >> furniture;
		while (furniture != "chair" && furniture != "sofa" && furniture != "table") {
			if (furniture == "esc") exit(0);
			else {
				cout << "input error! and please input again :" << endl;
				cin >> furniture;
			}
		}
		cout << "what logistics do you want:(sea road sky)" << endl;
		cin >> type;
		double result = FurnitureCost(style,furniture ) + LogisticsCost(type);
		cout << "the furniture and logistics total cost is:" << result << endl;
		cout << endl;
	}
	return;
}																		

int main()
{
	cout << "ArtFactory:" << endl;
	ArtFactory* art = new ArtFactory();
	FactoryClient(*art);
	AbstractChair* chair=art->CreateChair();
	chair->modify(9.8, 8.6, 5.4);
	cout << "修改后的艺术类型椅子的尺寸" << endl;
	chair->getInfo();
	delete art;
	cout << endl;
	cout << "ModernFactory:" << endl;
	ModernFactory* modern = new ModernFactory();
	FactoryClient(*modern);
	delete modern;
	cout << endl;
	cout << "VictorianFactory:" << endl;
	VictorianFactory* Victorian = new VictorianFactory();
	FactoryClient(*Victorian);
	delete Victorian;
	cout << endl << endl;

	LogisticsClient();
	cout << endl << endl;

	Client();
	return 0;
}