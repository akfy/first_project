#ifndef __Fish__
#define __Fish__



#include "Animal.h"





class Fish : public Animal
{
	enum Water
	{
		RIVER,
		SEA,
		LAKE,
	};
	int InputWater;
	Water Place;
public:
	// переопределяем интерфейс класса
	void InData(ifstream& ifst);  // ввод данных из потока
	void Out(ofstream& ofst);    // вывод данных в стандартный поток

	// создание без инициализации.
	Fish() {}
};

class FishFactory : public AnimalFactory {
public:
	
	FishFactory() :AnimalFactory(1) { }

	
	Animal* Create(int key) {
		if (key == mark)
			return new Fish;
		else
			return nullptr;
	}
};

#endif
