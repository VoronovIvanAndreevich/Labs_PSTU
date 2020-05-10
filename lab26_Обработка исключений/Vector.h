#pragma once
#include <iostream>
using namespace std;
const int MAX_SIZE2 = 30;
class List2{
	int size;
	int* beg;
public:
	List2() { size = 0; beg = 0; }
	List2(int s);
	List2(int s, int* mas);
	List2(const List2& l);
	~List2();
	const List2& operator=(const List2& l);
	int operator[](int i);
	int operator()();
	List2 operator-(const List2& l);
	List2 operator--();
	friend ostream& operator<<(ostream& out, const List2& v); friend istream& operator>>(istream& in, List2& v);
};
