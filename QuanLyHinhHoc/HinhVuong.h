#pragma once
#include"HinhChuNhat.h"
class HinhVuong:public HinhChuNhat
{
public:
	HinhVuong() {
		this->loai = "Hinh Vuong";
	}
	void nhap() {
		cout << "\nNhap canh goc vuong : ";
		cin >> this->chieuDai;
		this->chieuRong = this->chieuDai;
	}
	void xuat() {
		cout << "\nCanh HV la : " << this->chieuDai;
		cout << "\nLoai hinh la : " << this->loai;
	}
	float tinhDienTich() {
		return this->chieuDai * this->chieuRong;
	}
	string getLoai() {
		return this->loai;
	}
};

