#include <iostream>
#include "pair.cpp"
using namespace std;
int main(){
    setlocale(LC_ALL, "Russian");
    Pair A;
    cout << "������� ���� ����� int � double" << endl;
    cin >> A;
    cout << "���� �: " << A << endl;
    Pair B(1,2);
    cout << "���� B: " << B << endl;
    Pair C;
    ++A;
    cout << "���������� ���������: ";
    cout << A << endl;
    B++;
    cout << "����������� ���������: ";
    cout << B << endl;
    cout << "�������� ������������: ";
    C = B;
    cout << "���� C: " << C << endl;
    cout << "�������� ���������: " << endl;
    if(A > C) cout<<" A > C"<<endl;
    if(A < C) cout<<" A < C"<<endl;
    return 0;
}
