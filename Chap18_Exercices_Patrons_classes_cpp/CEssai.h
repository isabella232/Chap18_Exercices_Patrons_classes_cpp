#pragma once


template <class T, int n> class CEssai {
	T m_tab[n];

public:

	CEssai(T);//Constructeur


};

template<class T, int n>
CEssai<T, n>::CEssai(T value)
{
	int n_i;

	for (n_i = 0; n_i < n; n_i++)
		m_tab[n_i] = value;

}

