#pragma once
#include"HinhTron.h"
#include"HinhVuong.h"
#include<stdio.h>
#include<string>
#include<cmath>
class TongHopHInhHoc
{
private :
	int soLuong;
	HinhHoc** dsHinhHoc;
public:
	TongHopHInhHoc() {
		this->soLuong = 0;
		this->dsHinhHoc = NULL;
	}
	~TongHopHInhHoc() {
		return;
	}
	void nhap() {
		cout << "\nNhap so luong hinh hoc : ";
		cin >> this->soLuong;
		string loai="";
		this->dsHinhHoc = new HinhHoc * [this->soLuong];
		for (int i = 0; i < this->soLuong; i++)
		{
			cout << "\nNhap loai hinh : ";
			cin.ignore();
			getline(cin,loai);
			if (loai == "HCN")
				this->dsHinhHoc[i] = new HinhChuNhat();
			else if (loai == "HV")
				this->dsHinhHoc[i] = new HinhVuong();
			else if (loai == "HEL")
				this->dsHinhHoc[i] = new HinhElip();
			else if (loai == "HT")
				this->dsHinhHoc[i] = new HinhTron();
			else
			{
				cout << "\nKhong co loai hinh nay ";
				break;
			}
			this->dsHinhHoc[i]->nhap();
		}
	}
	void xuat() {
		for (int i = 0; i < this->soLuong; i++)
		{
			 this->dsHinhHoc[i]->xuat();
		}
	}
	float tinhTongDienTich() {
		float tong = 0;
		for (int i = 0; i < this->soLuong; i++)
		{
				tong = tong + this->dsHinhHoc[i]->tinhDienTich();
		}
		return tong;
	}
	float dienTichMax() {
		float max = 0;
		for (int i = 0; i < this->soLuong; i++)
		{
			if (max < this->dsHinhHoc[i]->tinhDienTich())
				max = this->dsHinhHoc[i]->tinhDienTich();
		}
		return max;
	}
	TongHopHInhHoc hinhDienTichMax() {
		TongHopHInhHoc dsKetQua;
		float max = dienTichMax();
		dsKetQua.dsHinhHoc = new HinhHoc * [this->soLuong];
		for (int i = 0; i < this->soLuong; i++)
		{
			if (max == this->dsHinhHoc[i]->tinhDienTich())
				dsKetQua.dsHinhHoc[dsKetQua.soLuong++] = this->dsHinhHoc[i];
		}return dsKetQua;
	}
	string hinhTongDienTichMax() {
		float hcn = 0, hv = 0, hel = 0, ht = 0;
		for (int i = 0; i < this->soLuong; i++)
		{
			if (this->dsHinhHoc[i]->getLoai() == "Hinh Chu Nhat")
				hcn = hcn + this->dsHinhHoc[i]->tinhDienTich();
			else if (this->dsHinhHoc[i]->getLoai() == "Hinh Vuong")
				hv = hv + this->dsHinhHoc[i]->tinhDienTich();
			else if (this->dsHinhHoc[i]->getLoai() == "Hinh Elip")
				hel = hel + this->dsHinhHoc[i]->tinhDienTich();
			else if (this->dsHinhHoc[i]->getLoai() == "Hinh Tron")
				ht = ht + this->dsHinhHoc[i]->tinhDienTich();
		}
		float A[4];
		A[0] = hcn, A[1] = hv, A[2] = hel, A[3] = ht;
		float max = A[0];
		for (int i = 0; i < 4; i++)
		{
			if (A[i] > max)
				max = A[i];
		}
		string a = "";
		if (hcn == max)
			a += "Hinh Chu Nhat";
		if (hv == max)
			a += " Hinh Vuong";
		if (hel == max)
			a += " Hinh Elip";
		if (ht == max)
			a += " Hinh Tron";
		return a;
	}
	float maxSHCN()
	{
		float max = 0;
		for (int i = 0; i < this->soLuong; i++)
		{
			if (this->dsHinhHoc[i]->getLoai() == "Hinh Chu Nhat")
			{
				if (this->dsHinhHoc[i]->tinhDienTich() > max)
					max = this->dsHinhHoc[i]->tinhDienTich();
			}
		}return max;
	}
	TongHopHInhHoc hinhchunhatSMAX() {
		TongHopHInhHoc hcnSMAX;
		hcnSMAX.dsHinhHoc = new HinhHoc * [this->soLuong];
		float max = maxSHCN();
		for (int i = 0; i < this->soLuong; i++)
		{
			if (this->dsHinhHoc[i]->getLoai() == "Hinh Chu Nhat")
			{
				if (max == this->dsHinhHoc[i]->tinhDienTich())
					hcnSMAX.dsHinhHoc[hcnSMAX.soLuong++] = this->dsHinhHoc[i];
			}
		}
		return hcnSMAX;
	}
	TongHopHInhHoc coppy() {
		TongHopHInhHoc dsHinhHoc2;
		dsHinhHoc2.dsHinhHoc = new HinhHoc * [this->soLuong];
		for (int i = 0; i < this->soLuong; i++)
		{
			dsHinhHoc2.dsHinhHoc[dsHinhHoc2.soLuong++] = this->dsHinhHoc[i];
		}return dsHinhHoc2;
	}
	void sapXep() {
		for (int i = 0; i < this->soLuong - 1; i++)
		{
			for (int j = i + 1; j < this->soLuong; j++)
			{
				if (this->dsHinhHoc[i]->tinhDienTich() > this->dsHinhHoc[j]->tinhDienTich())
					swap(this->dsHinhHoc[i], this->dsHinhHoc[j]);
			}
		}
	}
	float maxSHT()
	{
		float max = 0;
		for (int i = 0; i < this->soLuong; i++)
		{
			if (this->dsHinhHoc[i]->getLoai() == "Hinh Tron")
			{
				if (this->dsHinhHoc[i]->tinhDienTich() > max)
					max = this->dsHinhHoc[i]->tinhDienTich();
			}
		}return max;
	}
	TongHopHInhHoc hinhtronSMAX() {
		TongHopHInhHoc htSMAX;
		htSMAX.dsHinhHoc = new HinhHoc * [this->soLuong];
		float max = maxSHT();
		for (int i = 0; i < this->soLuong; i++)
		{
			if (this->dsHinhHoc[i]->getLoai() == "Hinh Tron")
			{
				if (max == this->dsHinhHoc[i]->tinhDienTich())
					htSMAX.dsHinhHoc[htSMAX.soLuong++] = this->dsHinhHoc[i];
			}
		}
		return htSMAX;
	}
};

