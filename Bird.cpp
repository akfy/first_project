

#include "Bird.h"


void Bird::InData(ifstream& ifst) {
	ifst >> flight ;
	ifst >> name;
}


void Bird::Out(ofstream& ofst) {
	ofst << name << " It is the Bird. And is ";
	if (flight)
		ofst << "migratory." << endl;
	else
		ofst << "not migratory." << endl;
	
}

namespace {
	BirdFactory rf;
}