#pragma once
#include"HinhElip.h"
class HinhTron : public HinhElip
{
public:
	HinhTron() {
		this->loai = "Hinh Tron";
	}
	void nhap() {
		cout << "\nNhap ban kinh : ";
		cin >> this->banKinhBe;
		this->banKinhLon = this->banKinhBe;
	}
	void xuat() {
		cout << "\nBan kinh la HT: " << this->banKinhBe;
		cout << "\nLoai hinh la : " << this->loai;
	}
	float tinhDienTich() {
		return this->banKinhLon * this->banKinhBe * PI;
	}
	string getLoai() {
		return this->loai;
	}
};

