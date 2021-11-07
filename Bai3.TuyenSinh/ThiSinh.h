#pragma once
#include <iostream>
#include <string>
using namespace std;

class ThiSinh
{
public:
	ThiSinh();
	~ThiSinh();
	ThiSinh(string hoTen, int sbd, string diaChi, int uuTien);
	void nhapThongTin();
	virtual void inThongTin();
	int getSbd() { return sbd; };
private:

protected:
	string hoTen;
	int sbd;
	string diaChi;
	int mucUuTien;
};