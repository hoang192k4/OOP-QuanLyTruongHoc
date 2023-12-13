#include"TruongHoc.h"
#include"HocSinh.h"
#include"GiaoVien.h"
void main() {
	TruongHoc TH;
	cout << "\n----------------------Nhap danh sach nguoi-------------------";
	TH.nhap();
	cout << "\n----------------------Xuat danh sach nguoi-------------------";
	TH.xuat();
	cout << "\n----------------------Tham nien cao nhat-------------------";
	int maxGVTN = TH.maxThamNien();
	cout << "\nTham nien cao nhat cua cac giao vien " << maxGVTN;
	cout << "\n----------------------danh sach giao vien co tham nien cao nhat------------------";
	TruongHoc dsGiaoVien = TH.gvMaxThamNien();
	dsGiaoVien.xuat();
	cout << "\n----------------------Danh sach giao vien co tham nien > 5 va chuyen mon TN-------------------";
	TruongHoc giaoVien = TH.seachGiaoVien();
	giaoVien.xuat();
	cout << "\n----------------------Diem trung binh cao nhat-------------------";
	float maxAVG = TH.maxAVG();
	cout << "\nDiem trung binh cao nhat cua hoc sinh la " << maxAVG;
	cout << "\n----------------------Danh sach hoc sinh diem trung binh cao nhat-------------------";
	TruongHoc dsHocSinh = TH.hsMaxAVG();
	dsHocSinh.xuat();
	cout << "\n----------------------Xep loai cua hoc sinh la -------------------"<<endl;
	TH.xepLoai();
}