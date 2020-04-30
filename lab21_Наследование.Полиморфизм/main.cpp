#include <iostream>
using namespace std;
class Triad {
public:
	int first;
	int second;
	int third;
	Triad(){
		set_triad();
	};
	Triad(int a, int b, int c){
		first = a;
		second = b;
		third = c;
	};
	void set_triad(){
		cout << "������� ������ �����: " << endl;
		cin >> first;
		cout << "������� ������ �����: " << endl;
		cin >> second;
		cout << "������� ������ �����: " << endl;
		cin >> third;
	};
	void pribavit_odin(){
        cout << "����������� ���������� �� ����" << endl;
        first++;
        second++;
        third++;
	};
	void print_triad(){
		cout << "������� ������:" << endl;
		cout << "������ �����: " << first << endl;
		cout << "������ �����: " << second << endl;
		cout << "������ �����: " << third << endl;
	};
};
class Time: public Triad{
public:
	int hours;
	int minutes;
	int seconds;
	Time(): Triad(){
		hours = first;
		minutes = second;
		seconds = third;
	};
	void pribavit_odin(){
        cout << "����������� ���������� �����, �����, ������ �� ���� �������" << endl;
        hours++;
        minutes++;
        seconds++;
	};
	void pribavit_n(int n){
		cout << "���������� ������ � ����� �� " << n << " ������" << endl;
		minutes+=n;
		seconds+=n;
	};
	void print_time(){
		cout << "������� �����: ";
		cout << hours << ':' << minutes << ':' << seconds << endl;
	};
};
int main(){
	setlocale(LC_ALL, "Russian");
	cout << "������� ����c" << endl;
	Triad base;
	base.print_triad();
	base.pribavit_odin();
	base.print_triad();
	cout << "\n����������� �����\n";
	Time derive;
	derive.print_time();
	derive.pribavit_odin();
	derive.print_time();
	int n;
	cout << "������� �����, �� ������� ��������� ����� (n): " << endl;
	cin >> n;
	derive.pribavit_n(n);
	derive.print_time();
	return 0;
}
