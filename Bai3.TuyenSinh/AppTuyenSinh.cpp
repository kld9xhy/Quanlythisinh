#include "TuyenSinh.h"

int main() {
	TuyenSinh ts;

	int luachon = 0;

	while (luachon != 4) {

		cout << "\n-----Lua chon chuc nang-----\n";
		cout << "1. Nhap danh sach thi sinh\n";
		cout << "2. Hien thi thong tin thi sinh\n";
		cout << "3. Tim kiem thi sinh theo so bao danh\n";
		cout << "4. Thoat\n";
		cout << "Lua chon cua ban: ";

		cin >> luachon;

		switch (luachon) {
		case 1:
			ts.nhapDsDuThi();
			cout << "--------------------\n";
			break;
		case 2:
			cout << "\nDanh sach thi sinh da nhap la:\n";
			ts.inDsDuThi();
			cout << "--------------------\n";
			break;
		case 3:
			int sbd;
			cout << "Nhap vao so bao danh thi sinh can tim kiem: ";
			cin >> sbd;
			ts.timKiemTS(sbd);
			cout << "--------------------\n";
			break;
		default:
			break;
		}
	}
}