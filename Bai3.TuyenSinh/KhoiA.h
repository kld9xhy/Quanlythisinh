#pragma once
#include "ThiSinh.h"

class KhoiA : public ThiSinh
{
public:
	KhoiA();
	~KhoiA();
	KhoiA(string mon1, string mon2, string mon3);
	void inThongTin();

private:

protected:
	string mon1;
	string mon2;
	string mon3;
};
