#include "Vector.h"
#include "Error.h"
List2::List2(int s){
	if (s > MAX_SIZE2) throw error("Vector length more than max size\n");
	size = s;
	beg = new int[s];
	for (int i = 0; i < size; i++)
		beg[i] = 0;
}
List2::List2(const List2& l){
	size = l.size;
	beg = new int[size];
	for (int i = 0; i < size; i++){
		beg[i] = l.beg[i];
	}
}
List2::~List2(){
	if (beg != 0) delete[]beg;
}

List2::List2(int s, int* mas){
	if (s > MAX_SIZE2) throw error("Vector length more than max size\n");
	size = s;
	beg = new int[size];
	for (int i = 0; i < size; i++)
		beg[i] = mas[i];
}
const List2& List2::operator =(const List2& l){
	if (this == &l)return *this;
	if (beg != 0) delete[]beg;
	size = l.size;
	beg = new int[size];
	for (int i = 0; i < size; i++)
		beg[i] = l.beg[i];
	return*this;
}
ostream& operator<<(ostream& out, const List2& l){
	if (l.size == 0) out << "�����\n";
	else{for (int i = 0; i < l.size; i++)
			out << l.beg[i] << " ";
		out << endl;
	}
	return out;
}
istream& operator >>(istream& in, List2& l){

	for (int i = 0; i < l.size; i++){
		cout << ">";
		in >> l.beg[i];
	}
	return in;
}
int List2::operator [](int i){
	if (i < 0)throw error("index < 0");
	if (i >= size) throw error("index > size");
	return beg[i];
}

List2 List2::operator-(const List2& v){
	List2 temp(size);
	for (int i = 0; i < size; ++i){
		temp.beg[i] = v.beg[i] - beg[i];
	}
	return temp;
}

List2 List2::operator--(){
	if (size == 0) throw error("�����");
	if (size == 1){
		size = 0;
		delete[]beg;
		beg = 0;
		return *this;
	}
	List2 temp(size, beg);
	delete[]beg;
	size--;
	beg = new int[size];
	for (int i = 0; i < size; i++)
		beg[i] = temp.beg[i];
	return*this;
};
int List2::operator()(){
	return size;
}
