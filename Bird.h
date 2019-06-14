#ifndef __Bird__
#define __Bird__

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

#include "Animal.h"

//------------------------------------------------------------------------------
// �������������
class Bird : public Animal
{
	bool flight;
	
public:
	// �������������� ��������� ������
	void InData(ifstream& ifst);  // ���� ������ �� ������
	void Out(ofstream& ofst);     // ����� ������ � ����������� �����

	// �������� ��� �������������.
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
