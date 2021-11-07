#pragma once
#include <iostream>
#include <vector>
#include "ThiSinh.h"
#include "KhoiA.h"
#include "KhoiB.h"
#include "KhoiC.h"

using namespace std;

class TuyenSinh
{
public:
	TuyenSinh();
	~TuyenSinh();
	void nhapDsDuThi();
	void inDsDuThi();
	void timKiemTS(int sbd);

private:
	vector <ThiSinh*> dsts;
};

