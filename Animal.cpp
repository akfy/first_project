
#include "Animal.h"

// Первоначальный список зарегистрированных фабрик пуст.
// Поэтому указатель обнулен.
AnimalFactory* AnimalFactory::top = nullptr;

// Конструктор, обеспечивающий начальную расстановку элементов в стеке и их ранжирование
AnimalFactory::AnimalFactory(int m) : mark(m)
{
	this->next = top;
	top = this;
}



//------------------------------------------------------------------------------
Animal* AnimalFactory::Make(int key)
{

	Animal* f = nullptr;

	AnimalFactory* tmp = top;

	// Обход фабрик в стеке до той, у которой ключ совпадает с искомым
	while (tmp) {
		f = tmp->Create(key);
		// При создании обход завершается
		if (f) return f;
		tmp = tmp->next;
	}
	return nullptr;
}

// иденитфикация, порождение и ввод 
Animal* AnimalFactory::In(ifstream& ifst)
{
	Animal* pf = nullptr;
	int k;
	ifst >> k;

	pf = Make(k);
	if (pf)
	{
		pf->type = k;
		pf->InData(ifst);

	}
	return pf;

}
