#include <iostream>
#include <cstring>
#include "point.h"
using namespace std;
int main(){
    setlocale(LC_ALL,"Russian");
    int odn;
    cout << "¬ведите количество элементов в однонаправленном списке: " ;
    cin >> odn;
    point *beg=make_list(odn);
    cout << "—формированный однонаправленный список: " << endl;
    print_list(beg);
    delete_chetn_elem(beg);
    cout << "–едактированный однонаправленный список после удалени€ первого четного элемента: " << endl;
    print_list(beg);
    delete_ols(beg);
    int dv, number;
    cout << "¬ведите количество элементов в двунаправленном списке: " ;
    cin >> dv;
    point_dv *beg_dv=make_list_dv(dv);
    cout << "—формированный двунаправленный список: " << endl;
    print_dv(beg_dv);
    cout << "¬ведите номер элемента в двунаправленном списке, куда добавить элемент: " << endl;
    cin >> number;
    add_dv(beg_dv,number);
    cout << "–едактированный двунаправленный список после добавлени€ элемента: " << endl;
    print_dv(beg_dv);
    delete_dv(beg_dv);
    return 0;
}
