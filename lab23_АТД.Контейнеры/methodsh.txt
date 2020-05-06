#include <iostream>
#include <cassert>
using namespace std;
class List {
	protected:
		int *arr;
		int size;
	public:
		List(): size(0), arr(NULL){}
		List(int _size):size(_size){
			assert(_size >= 0);
			if(_size > 0) arr = new int[_size];
			else arr = NULL;
		}
		int get_length() { return size; }
		int& operator[](int index);
    	int operator()(int arr);
		int* operator + (int h);
		int* operator ++ (int n);
		~List(){
			delete[] arr;
		}
};
class Integer{
protected:
	int num;
public:
	Integer() {};
	Integer(int _num) : num(_num) {};
	friend istream& operator >> (istream&, Integer&);
	friend ostream& operator << (ostream&, const Integer&);
};
istream& operator >> (istream& in, Integer& a){
	in >> (a.num);
	return in;
}
ostream& operator << (ostream& out, const Integer& a){
	out << (a.num);
	return out;
}
