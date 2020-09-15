#pragma once
#include"Customer.h"
class ListCustomer
{
	private:
		int n;
		Customer* list;
	public:
		void Indanhsach();
		void Add();
		void Search();
		void Sort();
		void Insert();
		void Delete();
		ListCustomer() {
			this->n = 0;
			this->list = NULL;
		}

		ListCustomer(const ListCustomer& p) {
			this->n = p.n;
			list = new Customer[n];
			for (int i = 0; i < n; i++) {
				*(list + i) = *(p.list + i);
			}
		}
		
};

