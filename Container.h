#ifndef __Container__
#define __Container__

#include "Animal.h"


//------------------------------------------------------------------------------
// Container.h - содержит класс,
// представляющий простейший контейнер
// на основе одномерного массива.
class Container
{

public:
	enum { max_len = 100 }; // максимальная длина
	int len; // текущая длина
	Animal* cont[max_len];
	void In(ifstream& ifst);
	void Out(ofstream& ofst);
	void Clear();
	Container();    // инициализация контейнера
	~Container() { Clear(); } // утилизация контейнера перед уничтожением
};

#endif