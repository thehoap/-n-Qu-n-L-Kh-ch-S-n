#include "ListCustomer.h"
void ListCustomer::Indanhsach() {
	cout << "--------------------***CHUONG TRINH QUAN LY Khach San***-----------------------" << endl;
	for (int i = 0; i < n; i++) {
		(this->list + i)->xuat();
	}
}