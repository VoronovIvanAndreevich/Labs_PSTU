#include <iostream>
#include "pair.h"
using namespace std;
Pair::Pair(void){
    this->first = 0;
    this->second = 0;
}
Pair::Pair(int x, double y){
    this->first = x;
    this->second = y;
}
Pair::Pair(const Pair& tmp){
    this->first = tmp.first;
    this->second = tmp.second;
}
Pair::~Pair(void){}
Pair& Pair::operator =(const Pair &tmp){
    if(&tmp==this) return *this;
    this->first = tmp.first;
    this->second = tmp.second;
    return *this;
}
Pair& Pair::operator ++(void){
    this->first++;
    return *this;
}
Pair Pair::operator ++(int){
    this->second += 1;
    Pair tmp(this->first, this->second);
    return tmp;
}
bool Pair::operator > (const Pair& tmp){
    if(this->first>tmp.first || (this->first==tmp.first) && (this->second>tmp.second)) return true; else
    return false;
}
bool Pair::operator < (const Pair& tmp){
    if(this->first<tmp.first || (this->first==tmp.first) && (this->second<tmp.second)) return true; else
    return false;
}
istream& operator >> (istream& in, Pair& tmp){
    in>>tmp.first>>tmp.second;
    return in;
}

ostream& operator << (ostream& out, const Pair& tmp){
    return (out<<tmp.first<<":"<<tmp.second);
}
