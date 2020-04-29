#include <iostream>
#include <cstdlib>
#include "crt.h"
using namespace std;
int main(){
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	crt();
	return 0;
}
