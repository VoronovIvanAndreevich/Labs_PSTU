#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>
using namespace std;
int hash_f(int n){
	int f = n*n;
	f = f / 100;
	int p = f % 1000;
	return p;
}
void **crt(){
	setlocale(LC_ALL, "Russian");
	string surname_s[] = {"�����", "������", "�������", "�����", "������", "��������", "������", "���", "����", "�������", "�������", "��������"};
	string name_s[] = {"�������", "����", "�����", "������", "������", "�������", "�������", "������", "�����", "�������", "��������", "��������"};
	string patronymics_s[] = {"��������", "����������", "���������", "����������", "�������������", "��������", "����������", "��������", "���������", "����������", "������������", "����������"};
	void** array_arr = new void*[5];
	array_arr[0] = new string[12];
	array_arr[1] = new string[12];
	array_arr[2] = new string[12];
	array_arr[3] = new int[102];
	array_arr[4] = new long[102];
	for(int i = 0; i < 12; i++){
        ((string*)array_arr[0])[i] = surname_s[i];
		((string*)array_arr[1])[i] = name_s[i];
		((string*)array_arr[2])[i] = patronymics_s[i];
	}
	cout << "���:                              �������    �������" << endl;
    int rand_surname;
    int rand_name;
    int rand_patronymics;
	for(int i = 0; i < 102; i++){
		rand_name = rand()%12;
		rand_surname = rand()%12;
		rand_patronymics = rand()%12;
		((int*)array_arr[3])[i] = rand()%9000+1000;
		((long*)array_arr[4])[i] = rand()%99999+11111;
		cout << ((string*)array_arr[0])[rand_name] << ' ' <<  	((string*)array_arr[1])[rand_surname] << ' ' << 	((string*)array_arr[2])[rand_patronymics];
		for(int j = 0; j < 31 - (((string*)array_arr[0])[rand_name].length() +	((string*)array_arr[1])[rand_surname].length() + ((string*)array_arr[2])[rand_patronymics].length()); j++){
			cout << ' ';
		}
		cout << ' ' << ((int*)array_arr[3])[i] << "       " << ((int*)array_arr[4])[i] << "   " << endl;
	}
	int *el = new int[102];
	for(int i = 0; i < 102; i++){
		el[i] = hash_f((((int*)array_arr[3])[i]));
	}
	int** table;
	table[0] = el;
	table[1] = new int[102];
	for(int i = 0; i < 102; i++){
		int t = ((int*)array_arr[3])[i];
		((int*)table[1])[i] = t;
	}
	cout << "���-���� �������(����)" << endl;
	for (int i = 0; i < 102; i++){
		cout << ((int*)table[0])[i] << '\t' << ' ' << ((int*)table[1])[i] << endl;
	}
	cout << "������� ����� ��������(����): ";
	int key;
	cin >> key;
	int hash_key = hash_f(key);
	for(int i = 0; i < 102; i++){
		if(hash_key == ((int*)table[0])[i]){
				cout << ((string*)array_arr[0])[rand_name] << ' ' <<  	((string*)array_arr[1])[rand_surname] << ' ' << 	((string*)array_arr[2])[rand_patronymics];
		for(int j = 0; j < 31 - (((string*)array_arr[0])[rand_name].length() +	((string*)array_arr[1])[rand_surname].length() + ((string*)array_arr[2])[rand_patronymics].length()); j++){
			cout << ' ';
		}
		cout << ((int*)array_arr[3])[i] << ' ' << ((int*)array_arr[4])[i] << ' ' << endl;
		}
		else{
		}
	}
	return array_arr;
}
