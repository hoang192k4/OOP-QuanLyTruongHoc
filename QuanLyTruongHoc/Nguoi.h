#pragma once
#include<iostream>
#include<string>
using namespace std;
class Nguoi
{
protected:
	string hoTen;
	int namSinh;
	string noiSinh;
	string diaChi;
public:
	Nguoi() {
		this->hoTen = "";
		this->namSinh = 0;
		this->noiSinh = "";
		this->diaChi = "";
	}
	Nguoi(string hoTen, int namSinh, string noiSinh, string diaChi) {
		this->hoTen = hoTen;
		this->noiSinh = noiSinh;
		this->namSinh = namSinh;
		this->diaChi = diaChi;
	}
	~Nguoi() {
		return;
	}
	void setHoTen(string hoten) {
		this->hoTen = hoten;
	}
	string getHoTen() {
		return this->hoTen;
	}
	void setNamSinh(int namSinh) {
		this->namSinh = namSinh;
	}
	int getNamSinh() {
		return this->namSinh;
	}
	void setNoiSinh(string noiSinh) {
		this->noiSinh = noiSinh;
	}
	string getNoisinh() {
		return this->noiSinh;
	}
	void setDiaChi(string diaChi) {
		this->diaChi = diaChi;
	}
	string getDiaChi() {
		return this->diaChi;
	}
	virtual void nhap() {
		cout << "Nhap Ho ten : ";
		cin.ignore();
		getline(cin, this->hoTen);
		cout << "Nhap nam sinh : "; cin >> this->namSinh;
		cout << "Nhap noi sinh : ";
		cin.ignore();
		getline(cin, this->noiSinh);
		cout << "Nhap dia chi : ";
		getline(cin, this->diaChi);
	}
	virtual void xuat() {
		cout << "\nHo ten la " << this->hoTen;
		cout << "\nNam sinh la " << this->namSinh;
		cout << "\nNoi sinh la " << this->noiSinh;
		cout << "\nDia chi la " << this->diaChi;
	}
 };


