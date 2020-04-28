#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int iterat(int* ary, int s, int k){
	bool found = false;
	int l = 0, tgt = 0;
	int cnt = 0;
	int r = s;
	while ((l <= r) && found != true && cnt < 10000 && ary[r] != ary[l]){
		tgt = l + ((k - ary[l]) * (r - l)) / (ary[r] - ary[l]);
		if (ary[tgt] < k){
			l = tgt + 1;
			cnt++;
		}
		else{
			cnt++;
			if (ary[tgt] > k)r = tgt + 1;
			else found = true;
		}
	}
	if (ary[l] == k) return l;
	else if (ary[r] == k) return r;
        else return -1;
}
int *crt(int s){
	srand(time(NULL));
	int *ary = new int[s];
	for (int i = 0; i < s; i++) ary[i] = rand() % 120;
	return ary;
}
void sorting(int *ary, int s){
	int i = 0;
	int j = s - 1;
	int mid = ary[s / 2];
	do{
		while (ary[i] < mid) i++;
		while (ary[j] > mid) j--;
		if (i <= j){
			int tmp = ary[i];
			ary[i] = ary[j];
			ary[j] = tmp;
			i++;
			j--;
		}
	} while (i <= j);
	if (j > 0) sorting(ary, j + 1);
	if (i < s) sorting(&ary[i], s - i);
}
void view_arr(int *ary, int s){
	cout << "���������� ������: ";
	for (int i = 0; i < s; i++) cout << ary[i] << ' ';
}
int BoyeraM(string str, string substr){
	int strl,
	subsl,
	resp = -1;
	strl = str.size();
	subsl = substr.size();
	if (strl != 0 && subsl != 0){
		int position;
		int bias[256];
		for (int i = 0; i < 256; i++){
			bias[i] = subsl;
		}
		for (int i = subsl - 2; i >= 0; i--) {
			if (bias[int((unsigned char)substr[i])] == subsl){
				bias[int((unsigned char)substr[i])] = subsl - i - 1;
			}
		}
		position = subsl - 1;
		while (position < strl){
			if (substr[subsl - 1] != str[position]){
				position += bias[int((unsigned char)str[position])];
			}
			else{
				for (int i = subsl - 1; i >= 0; i--){
					if (substr[i] != str[position - subsl + i + 1]){
						position += bias[int((unsigned char)str[position - subsl + i + 1])];
						break;
					}
					else if (i == 0){
						return position - subsl + 1;
					}
				}
			}
		}
	}
	return resp;
}
int main(){
	setlocale(LC_ALL, "Russian");
	int exixt = 3;
	int nomer = exixt + 1;
	while (nomer != exixt){
		if (nomer == exixt + 1){
			cout << "�������� ����� ��������: " << endl;
			cout << "1.���������������� �����" << endl;
			cout << "2.����� ������-����" << endl;
			cout << "3.�����" << endl;
			cout << "�����: " << endl;
			cin >> nomer;
		}
		else if (nomer == 1){
			int sz, k;
			cout << "������� ������ �������: " << endl;
			cin >> sz;
			int* arr = crt(sz);
			sorting(arr, sz);
			view_arr(arr, sz);
			cout << endl << "������� �����, ������� ����� �����: ";
			cin >> k;
			int i = iterat(arr, sz, k);
			if (i == -1){
				cout << "�������� ����� � ������� ���" << endl;
			}else{
				cout << "������ ��� ������� ��������� �� " << i + 1 << " �������." << endl;
			}
			nomer = exixt + 1;
		}
		else if(nomer == 2){
			cout << "������� ������, � ������� ����� ����������� �����: " << endl;
			char str[100];
			cin >> str;
			cout << "������� ��������� ��� ������: " << endl;
			char substr[100];
			cin >> substr;
			int alt = BoyeraM(str, substr);
			if (alt >= 0){
				cout << "���������� ������, �� ������� ������ ���� ������� ������: " << alt << endl;
			}
			else{
				cout << "������ ��� ������ � ����������� ������ ���" << endl;
			}
			nomer = exixt + 1;
		}
		else{
			nomer = exixt + 1;
		}
	}
	return 0;
}
