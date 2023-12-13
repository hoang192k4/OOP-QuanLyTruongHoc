#pragma once
#include"HinhHoc.h"
class HinhChuNhat : public HinhHoc
{
protected:
	float chieuDai;
	float chieuRong;
public:
	HinhChuNhat() {
		this->chieuDai = 0;
		this->chieuRong = 0;
		this->loai = "Hinh Chu Nhat";
	}
	void nhap() {
		cout << "Nhap chieu dai : ";
		cin >> this->chieuDai;
		cout << "Nhap chieu Rong : ";
		cin >> this->chieuRong;
	}
	void xuat() {
		cout << "\nChieu dai HCN la : " << this->chieuDai;
		cout << "\nChieu rong HCN la : " << this->chieuRong;
		cout << "\nLoai hinh la : " << this->loai;
	}
	float tinhDienTich() {
		return this->chieuDai * this->chieuRong;
	}
	string getLoai() {
		return this->loai;
	}
};

