#include <iostream>
using namespace std;
template <class T>
class List {
	public:
		List(int v,T y);
		List(const List<T>&a);
		~List();
		List&operator=(const List<T>&a);
		T&operator[](int idx);
		List operator+(List<T>&B);
		int operator()();
		int sz;
		T*data;
};
template <class T>
List<T>::List(int v,T y){
	sz=v;
	data=new T[sz];
	for(int i=0; i<sz; i++)
		data[i]=y;
}
template <class T>
List<T>::List(const List&a){
	sz=a.sz;
	data=new T[sz];
	for(int i=0; i<sz; i++)
		data[i]=a.data[i];
}
template <class T>
List<T>::~List(){
	delete[]data;
	data = 0;
}
template <class T>
List<T>&List<T>::operator=(const List<T>&a){
	if(this==&a)return *this;
	sz=a.sz;
	if (data!=0) delete[]data;
	data=new T[sz];
	for(int i=0; i<sz; i++)
		data[i]=a.data[i];
	return *this;
}
template <class T>
List<T> List<T>::operator+(List<T>&b){
	List<T> temp(sz,0);
	for (int i=0;i<sz;++i)
		temp.data[i]=data[i]+b.data[i];
	return temp;
}
template <class T>
T&List<T>::operator[](int idx){
	if (idx<sz) return data[idx];
	else cout << "Error!";
}
template <class T>
int List<T>::operator ()(){
	return sz;
}
template <class T>
ostream&operator<< (ostream&out,const List<T>&a){
	for(int i=0; i<a.sz; ++i)
		out<<a.data[i]<<" ";
	return out;
}
template <class T>
istream&operator>> (istream&in,List<T>&a){
	for(int i=0; i<a.sz; ++i)
		in>>a.data[i];
	return in;
}
