#pragma once
#include <iostream>
using namespace std;
const int MAX_SIZE = 30;
class List {
	int size;
	int* beg;
public:
	List() { size = 0; beg = 0; }
	List(int s);
	List(int s, int* mas);
	List(const List& l);
	~List();
	const List& operator=(const List& l);
	int operator[](int i);
	int operator()();
	List operator-(const List& l);
	List operator--();
	friend ostream& operator<<(ostream& out, const List& v); friend istream& operator>>(istream& in, List& v);
};
