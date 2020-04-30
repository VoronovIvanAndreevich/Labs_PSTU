#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    string mark;
    string model;
    int cost;
public:
    Car() {
        mark = "Lada";
        model = "Vesta";
        cost = 700;
        cout << "����������� ��� ����������" << endl;
    }
    Car(string mar, string mod, int cos) {
        mark = mar;
        model = mod;
        cost = cos;
        cout << "����������� � �����������" << endl;
    }
    Car(const Car &car) {
        mark = car.mark;
        model = car.model;
        cost = car.cost;
        cout << "����������� �����������" << endl;
    }
    void setCar() {
        cout << "������� �������� �����: ";
        cin >> mark;
        cout << "������� �������� ������: ";
        cin >> model;
        cout << "������� ����: ";
        cin >> cost;
    }
    void getCar() {
        cout << "��������� ����������: " << endl;
        cout << "�����: " << mark << endl;
        cout << "������: " << model << endl;
        cout << "����: " << cost << endl << endl;
    }
    ~Car() {
        cout << "����� ��������� ����������" << endl;
    }
};
class Fraction {
public:
	float first;
	int second;
	float summa(float a, int b, int col_dn)
	{
		float summ = a / col_dn * b;
		return summ;
	};
};
int main(){
    setlocale(LC_ALL, "Russian");
    Fraction fr;
	cout << "������� ����� ������: " << endl;;
	cin >> fr.first;
	cout << "������� ���������� ������������ ����: " << endl;;
	cin >> fr.second;
	int col_dn;
	cout << "������� ���������� ���� � ������: " << endl;;
	cin >> col_dn;
	float summa = fr.summa(fr.first, fr.second, col_dn);
	cout << "����������� ����� �� ������ ���������� ����: " << summa << endl;
	cout << "����������!" << endl;
    Car car1;
    car1.setCar();
    car1.getCar();
    Car car2("Toyota", "Mark II", 300);
    car2.getCar();
    Car car3(car2);
    car3.getCar();
    return 0;
}
