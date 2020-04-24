#include <iostream>
using namespace std;
struct point{
	double data;
	point* left;
	point* right;
};
point* Top(int& n, point* p, double*& arr, int& i, int& size, double& min){
	if (size == 0){
		cout << "Введите количество элементов: ";
		cin >> size;
		arr = new double[size];
	}
	point* r;
	int nl, nr;
	if (n == 0) { p = NULL; return p; }
	nl = n / 2;
	nr = n - nl - 1;
	r = new point;
	cout << "Значение узла: ";
	cin >> r->data;
	arr[i] = r->data;
	if (i == 0){
		min = arr[0];
	}
	i += 1;
	r->left = Top(nl, r->left, arr, i, size, min);
	r->right = Top(nr, r->right, arr, i, size, min);
	p = r;
	return p;
}
void sor_ka(double*& arr, int n){
	double tmp = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	tmp = arr[n / 2];
	arr[n / 2] = arr[0];
	arr[0] = tmp;
}
void Run(point* p, int level){
	if (p){
		Run(p->left, level + 1);
		for (int i = 0; i < level; i++) cout << " ";
		cout << p->data << endl;
		Run(p->right, level + 1);
	}
}
void Min(point* p, int level, double& min){
	if (p){
	Min(p->left, level + 1, min);
		if (min > p->data)
			min = p->data;
		Min(p->right, level + 1, min);
	}

}
point* first(double d){
	point* pv = new point;
	pv->data = d;
	pv->left = 0;
	pv->right = 0;
	return pv;
}
point* find(point* root, double d){
	point* pv = root, *prev = 0;
	bool found = false;
	while (pv && !found){
		prev = pv;
		if (d == pv->data) found == true;
		else if (d < pv->data) pv = pv->left;
		else pv = pv->right;
	}
	if (found) return pv;
	point* pnew = new point;
	pnew->data = d;
	pnew->left = 0;
	pnew->right = 0;
	if (d < prev->data)
		prev->left = pnew;
	else
		prev->right = pnew;
	return pnew;
}
void srch(point*& root, double* arr, int n){
	root = first(arr[0]);
	for (int i = 1; i < n; i++)
		find(root, arr[i]);
}
void del_arr(double*& arr){
	delete [] arr;
}
int main(){
	setlocale(LC_ALL, "rus");
	point* p = 0, * p1 = 0;
	double tmp = 0;
	int i = 0, j = 0;
	double* arr = 0;
	double min = 0;
	int n = 0;
	point* root = 0;
	int K = 0;
	do{
		cout << "1. Формирование идеально сбалансированного дерева типа double." << endl;
		cout << "2. Печать сбалансированного дерева." << endl;
		cout << "3. Ищем минимальный элемент." << endl;
		cout << "4. Преобразуем в дерево поиска." << endl;
		cout << "5. Печать дерева поиска." << endl;
		cout << "6. Выход." << endl;
		cout << "Выбирете номер операции: ";
		cin >> K;
		switch (K){
		case 1:
			p = Top(n, p, arr, i, n, min);
			sor_ka(arr, n);
			break;
		case 2:
			Run(p, 0);
			break;
		case 3:
		Min(p, n, min);
			cout << "Min= " << min << endl;
			break;
		case 4:
			srch(root, arr, n);
			break;
		case 5:
			Run(root, 0);
			del_arr(arr);
			break;
		}
	} while (K != 6);
	return 0;
}

