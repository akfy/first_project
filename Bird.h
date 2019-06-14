#ifndef __Bird__
#define __Bird__

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

#include "Animal.h"

//------------------------------------------------------------------------------
// прямоугольник
class Bird : public Animal
{
	bool flight;
	
public:
	// переопределяем интерфейс класса
	void InData(ifstream& ifst);  // ввод данных из потока
	void Out(ofstream& ofst);     // вывод данных в стандартный поток

	// создание без инициализации.
	Bird() {}
};

class BirdFactory : public AnimalFactory {
public:
	
	BirdFactory() :AnimalFactory(2) { }

	
	Animal* Create(int key) {
		if (key == mark)
			return new Bird;
		else
			return nullptr;
	}
};

#endif
