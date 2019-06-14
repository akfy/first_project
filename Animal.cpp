
#include "Animal.h"

// �������������� ������ ������������������ ������ ����.
// ������� ��������� �������.
AnimalFactory* AnimalFactory::top = nullptr;

// �����������, �������������� ��������� ����������� ��������� � ����� � �� ������������
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

	// ����� ������ � ����� �� ���, � ������� ���� ��������� � �������
	while (tmp) {
		f = tmp->Create(key);
		// ��� �������� ����� �����������
		if (f) return f;
		tmp = tmp->next;
	}
	return nullptr;
}

// �������������, ���������� � ���� 
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
