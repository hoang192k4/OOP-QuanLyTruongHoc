#include"HinhTron.h"
#include"HinhVuong.h"
#include"TongHopHInhHoc.h"
int main() {
	TongHopHInhHoc allHH;
	TongHopHInhHoc allHH2;
	allHH.nhap();
	allHH.xuat();
	float tongDIenTich = allHH.tinhTongDienTich();
	cout << "\n----------------Tong dien tich cac hinh la " << tongDIenTich<<endl;
	float maxDienTich = allHH.dienTichMax();
	cout << "\n----------------Dien tich lon nhat la " << maxDienTich<<endl;
	TongHopHInhHoc hinhDienTichMax = allHH.hinhDienTichMax();
	cout << "\n----------------Hinh co dien tich lon nhat : ";
	hinhDienTichMax.xuat();
	cout << endl;
	string hinhSMAX = allHH.hinhTongDienTichMax();
	cout << "\n----------------Loai Hinh co tong dien tich lon nhat : " << hinhSMAX<<endl;
	TongHopHInhHoc hcnDienTichMax = allHH.hinhchunhatSMAX();
	cout << "\n----------------Hinh chu nhat co dien tich lon nhat la ";
	hcnDienTichMax.xuat();
	cout << "\n\n--------------Hinh tron co dien tich lon nhat la ";
	TongHopHInhHoc htDienTichMax = allHH.hinhtronSMAX();
	htDienTichMax.xuat();
	cout << "\n-----------------Danh sach sau khi sap xep la --------------------";
	allHH2 = allHH.coppy();
	allHH2.sapXep();
	allHH2.xuat();
	return 0;
}