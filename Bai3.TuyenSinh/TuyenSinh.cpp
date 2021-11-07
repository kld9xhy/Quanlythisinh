#include "TuyenSinh.h"

TuyenSinh::TuyenSinh()
{
}

TuyenSinh::~TuyenSinh()
{
}

void TuyenSinh::nhapDsDuThi() {
	char traLoi;
	int chon;
	ThiSinh *ts;

	do {
		cout << "Nhap thi sinh(1-Khoi A, 2-Khoi B, 3-KhoiC): ";
		cin >> chon;

		switch (chon) {
		case 1:
			ts = new KhoiA("Toan", "Ly", "Hoa");
			break;
		case 2:
			ts = new KhoiB("Toan", "Hoa", "Sinh");
			break;
		case 3:
			ts = new KhoiC("Van", "Su", "Dia");
			break;
		default:
			ts = new KhoiA("Toan", "Ly", "Hoa");
			break;
		}

		ts->nhapThongTin();
		dsts.push_back(ts);

		cout << "Ban muon nhap nua khong? (c/k): ";
		cin >> traLoi;
	} while (traLoi == 'c');
	ts = NULL;
	delete ts;
}

void TuyenSinh::inDsDuThi() {
	for (ThiSinh *ts : dsts) {
		ts->inThongTin();
	}
}

void TuyenSinh::timKiemTS(int sbd) {
	bool timthay = false;
	for (ThiSinh *ts : dsts) {
		if (sbd == ts->getSbd()) {
			cout << "Thi sinh co so bao danh la " << sbd << " la:\n";
			ts->inThongTin();
			timthay = true;
		}
	}
	if (!timthay) cout << "Khong tim thay thi sinh can tim!!!" << endl;
}