#pragma once
#include"GiaoVien.h"
#include"HocSinh.h"
class TruongHoc
{
private:
	int soLuong;
	Nguoi** dsNguoi;
public:
	TruongHoc() {
		this->soLuong = 0;
		this->dsNguoi = NULL;
	}
	~TruongHoc() {
		return;
	}
	void nhap() {
		cout << "\nNhap so luong : ";
		cin >> this->soLuong;
		this->dsNguoi = new Nguoi * [this->soLuong];
		cin.ignore();
		for (int i = 0; i < this->soLuong; i++)
		{
			string chucVu = "";
			Nguoi* nguoi = NULL;
			cout << "Nhap chuc vu : ";
			getline(cin, chucVu);
			if (chucVu == "GV")
				nguoi = new GiaoVien();
			else if (chucVu == "HS")
				nguoi = new HocSinh();
			nguoi->nhap();
			this->dsNguoi[i] = nguoi;
		}
	}
	void xuat() {
		for (int i = 0; i < this->soLuong; i++)
		{
			this->dsNguoi[i]->xuat();
		}
	}
	int maxThamNien() {
		int max = 0;
		for (int i = 0; i < this->soLuong; i++)
		{
			string loai = typeid(*this->dsNguoi[i]).name();
			if (loai == "class GiaoVien")
			{
				if (max < ((GiaoVien*)this->dsNguoi[i])->tinhThamNien())
					max = ((GiaoVien*)this->dsNguoi[i])->tinhThamNien();
			}
		}
		return max;
	}
	TruongHoc gvMaxThamNien() {
		TruongHoc dsGiaoVien;
		dsGiaoVien.dsNguoi = new Nguoi * [this->soLuong];
		int max = maxThamNien();
		for (int i = 0; i < this->soLuong; i++)
		{
			string loai = typeid(*this->dsNguoi[i]).name();
			if (loai == "class GiaoVien")
			{
				if (max == ((GiaoVien*)this->dsNguoi[i])->tinhThamNien())
					dsGiaoVien.dsNguoi[dsGiaoVien.soLuong++] = this->dsNguoi[i];
			}
		}
		return dsGiaoVien;
	}
	TruongHoc seachGiaoVien() {
		TruongHoc dsGiaoVien;
		dsGiaoVien.dsNguoi = new Nguoi * [this->soLuong];
		for (int i = 0; i < this->soLuong; i++)
		{
			string loai = typeid(*this->dsNguoi[i]).name();
			if (loai == "class GiaoVien")
			{
				if (((GiaoVien*)this->dsNguoi[i])->tinhThamNien() > 5 && ((GiaoVien*)this->dsNguoi[i])->getChuyenMon() == "TN")
					dsGiaoVien.dsNguoi[dsGiaoVien.soLuong++] = this->dsNguoi[i];
			}
		}return dsGiaoVien;
	}
	float maxAVG() {
		float max = 0;
		for (int i = 0; i < this->soLuong; i++)
		{
			string loai = typeid(*this->dsNguoi[i]).name();
			if (loai == "class HocSinh")
			{
				if (max < ((HocSinh*)this->dsNguoi[i])->tinhDiemTrungBinh())
					max = ((HocSinh*)this->dsNguoi[i])->tinhDiemTrungBinh();
			}
		}
		return max;
	}
	TruongHoc hsMaxAVG() {
		TruongHoc dsHocSinh;
		dsHocSinh.dsNguoi = new Nguoi * [this->soLuong];
		float max = maxAVG();
		for (int i = 0; i < this->soLuong; i++)
		{
			string loai = typeid(*this->dsNguoi[i]).name();
			if (loai == "class HocSinh")
			{
				if (max == ((HocSinh*)this->dsNguoi[i])->tinhDiemTrungBinh())
					dsHocSinh.dsNguoi[dsHocSinh.soLuong++] = this->dsNguoi[i];
			}
		}
		return dsHocSinh;
	}
	void xepLoai() {
		string xepLoai = "";
		for (int i = 0; i < this->soLuong; i++)
		{
			string loai = typeid(*this->dsNguoi[i]).name();
			if (loai == "class HocSinh")
			{
				HocSinh* hs = (HocSinh*)this->dsNguoi[i];
				if (hs->tinhDiemTrungBinh() > 9)
					xepLoai = "xuat sac";
				else if (hs->tinhDiemTrungBinh() >= 8)
					xepLoai = "Gioi";
				else if (hs->tinhDiemTrungBinh() >= 7)
					xepLoai = "Kha";
				else if (hs->tinhDiemTrungBinh() >= 5)
					xepLoai = "Trung binh";
				else
					xepLoai = "Yeu";
				hs->xuat();
				cout << "\nXep loai cua hoc sinh la  " << xepLoai<<endl;
			}
		}
	}
};

