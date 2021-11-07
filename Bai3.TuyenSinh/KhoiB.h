#pragma once
#include "ThiSinh.h"

class KhoiB : public ThiSinh
{
public:
	KhoiB();
	~KhoiB();
	KhoiB(string mon1, string mon2, string mon3);
	void inThongTin();

private:

protected:
	string mon1;
	string mon2;
	string mon3;
};
