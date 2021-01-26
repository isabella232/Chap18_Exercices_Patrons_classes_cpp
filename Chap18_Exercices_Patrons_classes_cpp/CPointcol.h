#pragma once

#include<iostream>

using namespace std;

template <class T, class U> class CPointcol {

	T m_x, m_y;
	U m_coul;

public :

	CPointcol(T abs, T ord, U cl) {
		m_x = abs;
		m_y = ord;
		m_coul = cl;

	}

	void affiche() {

		cout << "point colore - coordonnees" << m_x << " " << m_y << " couleur " << m_coul << endl;
	}

	friend std::ostream& operator<<(std::ostream& os, const CPointcol& value) {

		return os << value.m_x << " " << value.m_y << " " << value.m_coul << std::endl;
	}

};