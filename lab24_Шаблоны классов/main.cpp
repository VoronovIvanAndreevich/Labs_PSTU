#include <iostream>
#include "List.h"
#include "Pair.cpp"
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	List<int>G(6,0);
	cout << "������� �������� ������� G: " << endl;
	cin >> G;
	cout << "������ ������: ";
	cout << G << endl;
	List <int>H(6,0);
	cout << "������� �������� ������� H: " << endl;
	cin >> H;
	cout << "������ ������: ";
	cout << H << endl;
	cout << "������ � �������� ������� �� ������� G[2]: ";
	cout <<G[2] << endl;
	cout << "������ ������� G(): ";
	cout << G() << endl;
	List<int> J(6, 0);
	J = G + H;
	cout << "�������� ���� �������� J = G + H: ";
	cout << J << endl;
	cout << "���������������� �����" << endl;
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
