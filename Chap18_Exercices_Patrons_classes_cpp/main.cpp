#include "CEssai.h"

int main() {

	const int n = 3;
	int p = 5;//fonctionne pas p doit �tre constant
	CEssai<int, 10> t1(10);
	CEssai<int, n> t2(5);
	//CEssai<double, p> t3(5.2);//fonctionne pas p doit �tre constant

	



	return 0;
}