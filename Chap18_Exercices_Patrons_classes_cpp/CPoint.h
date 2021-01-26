#pragma once
#include <iostream>

using namespace std;

template <class T> class CPoint {
	T m_x, m_y; // coordonnees

public:
	CPoint(T abs, T ord) { m_x = abs; m_y = ord; }
	void affiche()const;
};

template <class T> void CPoint<T>::affiche()const {
	cout << "Coordonnees : " << m_x << " " << m_y << endl;
}

 void CPoint<char>::affiche()const {
	 cout << "Coordonnees : " << static_cast<int>(m_x) << " " << static_cast<int>(m_y) << endl;;
 }