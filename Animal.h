#ifndef __Animal__
#define __Animal__

//------------------------------------------------------------------------------
// Animal.h - содержит описание обобщающего животного,
// €вл€ющеес€ базовыым классом дл€ всех прочих животных
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

//------------------------------------------------------------------------------

//  ласс, обобщающает всх имеющихс€ животных.
// явл€етс€ абстрактным, обеспечива€, тем самым, проверку интерфейса 
class Animal {
public:
	int type;
	char name[255];
	virtual void InData(ifstream& ifst) = 0;  // ввод данных из потока
	virtual void Out(ofstream& ofst) = 0;     // вывод данных в стандартный поток
//  protected:
//    Animal() {};
};


class AnimalFactory {
public:
	//  онструктор, обеспечивающий начальную расстановку элементов в стеке и их ранжирование
	AnimalFactory(int m);

	static Animal* Make(int key);

	static Animal* In(ifstream& ifst);


	virtual Animal* Create(int key) = 0;



	int mark;

	static AnimalFactory* top;

	AnimalFactory* next;

};

#endif

