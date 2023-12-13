#pragma once
#include<iostream>
#include<string>
using namespace std;
class HinhHoc
{
protected:
	string loai;
public:
	virtual void nhap() = 0;
	virtual void xuat() = 0;
	virtual float tinhDienTich() = 0;
	virtual string getLoai() = 0;
};

