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
		cout << "Введите первое число: " << endl;
		cin >> first;
		cout << "Введите второе число: " << endl;
		cin >> second;
		cout << "Введите третье число: " << endl;
		cin >> third;
	};
	void pribavit_odin(){
        cout << "Произведено увеличение на один" << endl;
        first++;
        second++;
        third++;
	};
	void print_triad(){
		cout << "Искомая триада:" << endl;
		cout << "Первое число: " << first << endl;
		cout << "Второе число: " << second << endl;
		cout << "Третье число: " << third << endl;
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
        cout << "Произведено увеличение часов, минут, секунд на одну единицу" << endl;
        hours++;
        minutes++;
        seconds++;
	};
	void pribavit_n(int n){
		cout << "Увеличение секунд и минут на " << n << " единиц" << endl;
		minutes+=n;
		seconds+=n;
	};
	void print_time(){
		cout << "Искомое время: ";
		cout << hours << ':' << minutes << ':' << seconds << endl;
	};
};
int main(){
	setlocale(LC_ALL, "Russian");
	cout << "Базовый класc" << endl;
	Triad base;
	base.print_triad();
	base.pribavit_odin();
	base.print_triad();
	cout << "\nПроизводный класс\n";
	Time derive;
	derive.print_time();
	derive.pribavit_odin();
	derive.print_time();
	int n;
	cout << "Введите число, на которое увеличить время (n): " << endl;
	cin >> n;
	derive.pribavit_n(n);
	derive.print_time();
	return 0;
}
