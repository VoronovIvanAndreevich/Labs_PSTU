#include <iostream>
#include "List.h"
#include "Pair.cpp"
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	List<int>G(6,0);
	cout << "Вводите значения вектора G: " << endl;
	cin >> G;
	cout << "Первый вектор: ";
	cout << G << endl;
	List <int>H(6,0);
	cout << "Вводите значения вектора H: " << endl;
	cin >> H;
	cout << "Второй вектор: ";
	cout << H << endl;
	cout << "Доступ к элементу вектора по индексу G[2]: ";
	cout <<G[2] << endl;
	cout << "Длинна вектора G(): ";
	cout << G() << endl;
	List<int> J(6, 0);
	J = G + H;
	cout << "Сложение двух векторов J = G + H: ";
	cout << J << endl;
	cout << "Пользовательский класс" << endl;
	Pair A;
    cout << "Введите пару чисел int и double" << endl;
    cin >> A;
    cout << "Пара А: " << A << endl;
    Pair B(1,2);
    cout << "Пара B: " << B << endl;
    Pair C;
    ++A;
    cout << "Префиксный инкремент: ";
    cout << A << endl;
    B++;
    cout << "Постфиксный инкремент: ";
    cout << B << endl;
    cout << "Проверка присваивания: ";
    C = B;
    cout << "Пара C: " << C << endl;
    cout << "Операции сравнения: " << endl;
    if(A > C) cout<<" A > C"<<endl;
    if(A < C) cout<<" A < C"<<endl;
	return 0;
}
