#pragma once
#include "CPoint.h"
template <class T, class U> class TPointcol :public CPoint<T>
{
	U cl;

public :

	TPointcol(T abs, T ord, U coul) :CPoint<T>(abs, ord) {
		cl = coul;
	}

	void affiche()const ;

};

template<class T,class U>
inline void TPointcol<T,U>::affiche() const
{
	CPoint<T>::affiche();
	cout << "couleur : " << cl << endl;
}


class CPointCoul :public CPoint<int> {

	short cl;

public :
	CPointCoul(int abs, int ord, short coul) :CPoint<int>(abs, ord) {
		cl = coul;
	}

	void affiche()const {
		CPoint<int>::affiche();
		cout << "couleur : " << cl << endl;

	}

};

