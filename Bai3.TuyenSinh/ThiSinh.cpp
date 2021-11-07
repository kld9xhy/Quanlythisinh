#include "ThiSinh.h"

ThiSinh::ThiSinh()
{
}

ThiSinh::~ThiSinh()
{
}

ThiSinh::ThiSinh(string hoTen, int sbd, string diaChi, int mucUuTien) {
	this->hoTen = hoTen;
	this->sbd = sbd;
	this->diaChi = diaChi;
	this->mucUuTien = mucUuTien;
}

void ThiSinh::nhapThongTin() {
	cin.ignore();
	cout << "Nhap ho ten: ";
	getline(cin, hoTen);
	cout << "Nhap so bao danh: ";
	cin >> sbd;
	cin.ignore();
	cout << "Nhap dia chi: ";
	getline(cin, diaChi);
	cout << "Nhap muc uu tien: ";
	cin >> mucUuTien;
}

void ThiSinh::inThongTin() {
	cout << "Ho ten: " << this->hoTen << endl;
	cout << "So bao danh: " << this->sbd << endl;
	cout << "Dia chi: " << this->diaChi << endl;
	cout << "Khu vuc uu tien: " << this->mucUuTien << endl;
}