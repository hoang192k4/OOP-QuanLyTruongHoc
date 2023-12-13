#pragma once
#include"Nguoi.h"
class HocSinh : public Nguoi
{
private:
	float diemToan;
	float diemVan;
	float diemNgoaiNgu;
public:
	HocSinh() {
		this->diemToan = 0;
		this->diemVan = 0;
		this->diemNgoaiNgu = 0;
	}
	HocSinh(float diemToan, float diemVan, float diemNgoaiNgu) {
		this->diemToan = diemToan;
		this->diemVan = diemVan;
		this->diemNgoaiNgu = diemNgoaiNgu;
	}
	~HocSinh() {
		return;
	}
	void setDiemToan(float diemToan) {
		this->diemToan = diemToan;
	}
	float getDiemToan() {
		return this->diemToan;
	}
	void setDiemVan(float diemVan) {
		this->diemVan = diemVan;
	}
	float getDiemVan() {
		return this->diemVan;
	}
	void setDiemNgoaiNgu(float diemNgoaiNgu) {
		this->diemNgoaiNgu = diemNgoaiNgu;
	}
	float getDiemNgoaiNgu() {
		return this->diemNgoaiNgu;
	}
	void nhap() {
		Nguoi::nhap();
		cout << "Nhap diem toan : "; cin >> this->diemToan;
		cout << "Nhap diem van : "; cin >> this->diemVan;
		cout << "Nhap diem ngoai ngu : "; cin >> this->diemNgoaiNgu;
		cin.ignore();
	}
	void xuat() {
		Nguoi::xuat();
		cout << "\nDiem toan " << this->diemToan;
		cout << "\nDiem van " << this->diemVan;
		cout << "\nDiem ngoai ngu " << this->diemNgoaiNgu<<endl;
	}
	float tinhDiemTrungBinh() {
		return (this->diemVan + this->diemNgoaiNgu + this->diemToan) / 3;
	}
};

