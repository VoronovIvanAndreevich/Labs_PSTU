#include <iostream>
#include <cstring>
#include "point.h"
using namespace std;
int main(){
    setlocale(LC_ALL,"Russian");
    int odn;
    cout << "������� ���������� ��������� � ���������������� ������: " ;
    cin >> odn;
    point *beg=make_list(odn);
    cout << "�������������� ���������������� ������: " << endl;
    print_list(beg);
    delete_chetn_elem(beg);
    cout << "��������������� ���������������� ������ ����� �������� ������� ������� ��������: " << endl;
    print_list(beg);
    delete_ols(beg);
    int dv, number;
    cout << "������� ���������� ��������� � ��������������� ������: " ;
    cin >> dv;
    point_dv *beg_dv=make_list_dv(dv);
    cout << "�������������� ��������������� ������: " << endl;
    print_dv(beg_dv);
    cout << "������� ����� �������� � ��������������� ������, ���� �������� �������: " << endl;
    cin >> number;
    add_dv(beg_dv,number);
    cout << "��������������� ��������������� ������ ����� ���������� ��������: " << endl;
    print_dv(beg_dv);
    delete_dv(beg_dv);
    return 0;
}
