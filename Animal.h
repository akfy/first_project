#ifndef __Animal__
#define __Animal__

//------------------------------------------------------------------------------
// Animal.h - �������� �������� ����������� ���������,
// ���������� �������� ������� ��� ���� ������ ��������
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

//------------------------------------------------------------------------------

// �����, ����������� ��� ��������� ��������.
// �������� �����������, �����������, ��� �����, �������� ���������� 
class Animal {
public:
	int type;
	char name[255];
	virtual void InData(ifstream& ifst) = 0;  // ���� ������ �� ������
	virtual void Out(ofstream& ofst) = 0;     // ����� ������ � ����������� �����
//  protected:
//    Animal() {};
};


class AnimalFactory {
public:
	// �����������, �������������� ��������� ����������� ��������� � ����� � �� ������������
	AnimalFactory(int m);

	static Animal* Make(int key);

	static Animal* In(ifstream& ifst);


	virtual Animal* Create(int key) = 0;



	int mark;

	static AnimalFactory* top;

	AnimalFactory* next;

};

#endif

