#include <iostream>
#include "List.cpp"
#include "Vector.cpp"
#include "Error.h"
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "������ ��� ������ ������ ����������: ";
	cin >> a;
	int	arr[2] = {1,2};
	if (a == 1){
		try{
			List b(2, arr);
			cout << "��������: ";
			cout << b;
			cout << "������� ������ ��������: ";
			int i=0;
			cin >> i;
			cout << "������� � ��������: " << i << endl;
			cout << b[i] << endl;
			cout << "�������� �������" << endl;
			--b;
			cout << b;
			cout << "�������� �������" << endl;
			--b;
			cout << b;
			cout << "�������� �������" << endl;
			--b;
		}
		catch (int){
			cout << "������!" << endl;
		}
		return 0;
	}
	else if (a == 2){
		try{
			List2 b(2, arr);
			cout << "��������: ";
			cout << b;
			cout << "������� ������ ��������: ";
			int i=0;
			cin >> i;
			cout << "������� � �������� " << i << endl;
			cout << b[i] << endl;
			cout << "�������� �������" << endl;
			--b;
			cout << b;
			cout << "�������� �������" << endl;
			--b;
			cout << b;
			cout << "�������� �������" << endl;
			--b;
		}
		catch (error e){
			e.what();
		}
		return 0;
	}
	else {
	cout << "�������������� �����!";
	return 0;
	}
}
