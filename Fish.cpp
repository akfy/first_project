
#include "Fish.h"


void Fish::InData(ifstream& ifst) {
	ifst >> InputWater;
	Place = static_cast<Water>(InputWater);
	ifst >> name;
}


void Fish::Out(ofstream& ofst) {
	
	ofst << name << " It is the fish. It lives in ";
	switch (Place) {
	case RIVER: // река
		ofst << "a river." << endl;
		break;
	case SEA: // море
		ofst << "a sea." << endl;
		break;
	case LAKE: // озеро
		ofst << "a lake." << endl;
		break;
	default:
		ofst << "(Who knows?)." << endl;
	}
}

namespace {
	FishFactory tf;
}
