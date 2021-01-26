#include "CEssai.h"

int main() {

	const int n = 3;
	int p = 5;//fonctionne pas p doit être constant
	CEssai<int, 10> t1(10);
	CEssai<int, n> t2(5);
	//CEssai<double, p> t3(5.2);//fonctionne pas p doit être constant

	



	return 0;
}