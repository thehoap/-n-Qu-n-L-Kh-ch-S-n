#pragma once
#include"Date.h"
class Customer
{
	private:
		string mahoadon,ten,cmnd,tenphong,loaiphong;
		bool gioitinh;
		Date ngayden,ngaydi;
		int tienphong,Dongia;
	public:
		Customer(){
			mahoadon = "ab102423";
			ten = "Ngo Hoang";
			cmnd ="191911273";
			gioitinh = true;
			tenphong = "A100";
			loaiphong = "A";
			ngayden=Date(21, 10, 2000);
			ngaydi=Date(22, 10, 2000);
			tienphong = 800;
		}
		Customer(string Mahoadon, string Ten, string Cmnd, string Tenphong, string Loaiphong, bool Gioitinh, Date Ngayden, Date Ngaydi, int Tienphong) {
			this->mahoadon = Mahoadon;
			this->ten = Ten;
			this->cmnd = Cmnd;
			this->tenphong = Tenphong;
			this->loaiphong = Loaiphong;
			this->gioitinh = Gioitinh;
			this->ngayden = Ngayden;
			this->ngaydi = Ngaydi;
			this->tienphong = Tienphong;
		}
		Customer(const Customer& p) {
			this->mahoadon = p.mahoadon;
			this->ten = p.ten;
			this->cmnd = p.cmnd;
			this->tenphong = p.tenphong;
			this->loaiphong = p.loaiphong;
			this->gioitinh = p.gioitinh;
			this->ngayden = p.ngayden;
			this->ngaydi = p.ngaydi;
			this->tienphong = p.tienphong;
		}
		void nhap();
		void xuat();
};

