#include "KhoiA.h"

KhoiA::KhoiA()
{
}

KhoiA::~KhoiA()
{
}

KhoiA::KhoiA(string mon1, string mon2, string mon3) {
	this->mon1 = mon1;
	this->mon2 = mon2;
	this->mon3 = mon3;
}
void KhoiA::inThongTin() {
	ThiSinh::inThongTin();
	cout << "Mon 1: " + this->mon1 << endl;
	cout << "Mon 2: " + this->mon2 << endl;
	cout << "Mon 3: " + this->mon3 << endl << endl;
}