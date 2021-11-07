#pragma once
#include "ThiSinh.h"

class KhoiC : public ThiSinh
{
public:
	KhoiC();
	~KhoiC();
	KhoiC(string mon1, string mon2, string mon3);
	void inThongTin();

private:

protected:
	string mon1;
	string mon2;
	string mon3;
};
