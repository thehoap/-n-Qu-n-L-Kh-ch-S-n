#include "ListCustomer.h"
void ListCustomer::Indanhsach() {
	cout << "--------------------***CHUONG TRINH QUAN LY Khach San***-----------------------" << endl;
	for (int i = 0; i < n; i++) {
		(this->list + i)->xuat();
	}
}
void ListCustomer::Add() {
	int k;
	do
	{
		cout << "Nhap vi tri can them:";
		cin >> k;
		if (k > n || k < 0) cout << "vi tri khong ton tai!!!" << endl;
	} while (k > n || k < 0);

	Customer x;
	Customer* nlist = this->list;
	cout << "Nhap thong tin nhan vien them vao:";
	x.nhap();
	this->list = new Customer[n + 1];
	for (int i = 0; i < n; i++) {
		*(list + i) = *(nlist + i);
	}
	for (int i = n; i > k; i--) {
		*(list + i) = *(list + i - 1);
	}
	*(list + k) = x;
	this->n++;
	delete[] nlist;
}