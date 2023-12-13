#pragma once
#include"Nguoi.h"
class GiaoVien : public Nguoi
{
private:
	int namBatDau;
	string chuyenMon;
public:
	GiaoVien() {
		this->namBatDau = 0;
		this->chuyenMon = "";
	}
	GiaoVien(int namBatDau, string chuyenMon) {
		this->namBatDau = namBatDau;
		this->chuyenMon = chuyenMon;
	}
	~GiaoVien() {
		return;
	}
	void setNamBatDau(int namBatDau) {
		this->namBatDau = namBatDau;
	}
	int getNamBatDau() {
		return this->namBatDau;
	}
	void setChuyenMon(string chuyenMon) {
		this->chuyenMon = chuyenMon;
	}
	string getChuyenMon() {
		return this->chuyenMon;
	}
	void nhap() {
		Nguoi::nhap();
		cout << "Nhap nam bat dau : "; cin >> this->namBatDau;
		cout << "Nhap Chuyen mon : ";
		cin.ignore();
		getline(cin, this->chuyenMon);
	}
	void xuat() {
		Nguoi::xuat();
		cout << "\nNam bat dau la " << this->namBatDau;
		cout << "\nChuyen mon la " << this->chuyenMon<<endl;
	}
	int tinhThamNien() {
		int namHienTai;
		tm today;
		time_t lTime;
		time(&lTime);
		localtime_s(&today, &lTime);
		namHienTai = today.tm_year + 1900;
		return namHienTai - this->namBatDau;
	}


};

