#include <iostream>
#include "pair.cpp"
using namespace std;
int main(){
    setlocale(LC_ALL, "Russian");
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
