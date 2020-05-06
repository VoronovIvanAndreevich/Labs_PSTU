#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Containers.cpp"
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	cout << "Количество элементов в массиве: ";
	int sizearr, n;
	cin >> sizearr;
	List list(sizearr);
	for(int i = 0; i < sizearr; i++){
		list[i] = rand()%101;
	}
	cout << "Первоначальный массив: ";
	for(int i = 0; i < sizearr; i++){
		cout << list[i] << " ";
	}
	cout << endl;
	cout << "Кол-во элементов массива (): ";
	int size = (list(sizearr-1));
	cout << size << endl;
	n=1;
	cout << "Массив после прибавления числа 10 ко всем его элементам: ";
	list+10;
	for (int j=0; j<list.get_length(); j++) cout << list[j] << " ";
	cout << endl;
	cout << "Переход вправо к следующему элементу с помощью ++ ";
	list++;
	for(int i = 0; i < n; i++){
		cout << list[n] << " ";
	}
	return 0;
}
