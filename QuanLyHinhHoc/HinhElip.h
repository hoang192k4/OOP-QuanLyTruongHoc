#pragma once
#include"HinhHoc.h"
#define PI 3.14;
class HinhElip : public HinhHoc
{
protected:
	float banKinhLon;
	float banKinhBe;
public:
	HinhElip() {
		this->loai = "Hinh Elip";
	}
	void nhap() {
		cout << "\nNhap ban kinh lon : ";
		cin >> this->banKinhLon;
		cout << "\nNhao ban kinh be : ";
		cin >> this->banKinhBe;
	}
	void xuat() {
		cout << "\nBan kinh lon HEL : " << this->banKinhLon;
		cout << "\nBan knh be HEL : " << this->banKinhBe;
		cout << "\nLoai hinh la : " << this->loai;
	}
	float tinhDienTich() {
		return this->banKinhLon * this->banKinhBe * PI;
	}
	string getLoai() {
		return this->loai;
	}
};

