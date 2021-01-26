#include "CEssai.h"
#include "CPointcol.h"
#include "CPoint.h"
#include "CVect.h"
#include "TPointcol.h"

int main() {

	//Exercice 1 
	const int n = 3;
	int p = 5;//fonctionne pas p doit être constant
	CEssai<int, 10> t1(10);
	CEssai<int, n> t2(5);
	//CEssai<double, p> t3(5.2);//fonctionne pas p doit être constant

	//Exercice 2 
	CPointcol<int, short>p1(5, 5, 2);
	p1.affiche();
	CPointcol<float,int >p2(4, 6, 2);
	p2.affiche();

	cout << p1 << endl;


	//Exercice 3

	CPoint<int> pt(0, 0);
	CPoint<char> pt2(60, 65);
	pt.affiche();
	pt2.affiche();

	//Exercice 4

	CVect<int> vi(10);
	vi[5] = 5;
	vi[2] = 2;
	cout << vi[2] << " " << vi[5] << endl;

	CVect<double> vi2(10);
	vi2[5] = 5.1;
	vi2[2] = 2.2;
	cout << vi2[2] << " " << vi2[5] << endl;

	//Exercice 5

	TVect<int,10> v;
	v[5] = 8;
	v[2] = 9;
	cout << v[2] << " " << v[5] << endl;


	//Exercice 6
	TPointcol <int,int>tp(2, 4, 1);
	tp.affiche();
	TPointcol<double,int>tp2(2.5, 5.4, 4); 
	tp2.affiche();


	CPointCoul tp3(2, 5, 1);
	tp3.affiche();
	CPointCoul tp4(2.4, 5.9, 1);//warning cast double => int
	tp3.affiche();



	




	return 0;
}