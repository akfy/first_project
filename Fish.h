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
	// �������������� ��������� ������
	void InData(ifstream& ifst);  // ���� ������ �� ������
	void Out(ofstream& ofst);    // ����� ������ � ����������� �����

	// �������� ��� �������������.
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
