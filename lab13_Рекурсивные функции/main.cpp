#include <iostream>
using namespace std;
int fibonachi(int n){
    if (n == 0)return 0;
    if (n == 1)return 1;
    return fibonachi(n-1) + fibonachi(n-2);
}
int main(){
    setlocale(LC_ALL, "Russian");
    cout << "������� ����� n-�� ����� � ������������������ ��������: ";
    int n;
    cin >> n;
    cout << "������� ����� � ������������������: " << fibonachi(n);
    return 0;
}
