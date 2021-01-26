#pragma once

template <class T> class CVect {
	
	int m_nelem;
	T* m_adr;

public :

	CVect(int);
	~CVect();

	T& operator[](int);


};

template<class T>
inline CVect<T>::CVect(int n_n)
{
	m_adr = new T[m_nelem = n_n];
}

template<class T>
inline CVect<T>::~CVect()
{
	delete m_adr;
}

template<class T>
inline T& CVect<T>::operator[](int n_i)
{
	if (n_i<0 || n_i>m_nelem) n_i = 0;
	return m_adr[n_i];
}





template <class T, int n> class TVect {

	int m_nelem;
	T m_v[n];

public:

	TVect();
	~TVect();

	T& operator[](int);


};

template<class T, int n>
inline TVect<T, n>::TVect()
{
	m_nelem = n;
}

template<class T, int n>
inline TVect<T, n>::~TVect()
{
}

template<class T, int n>
inline T& TVect<T, n>::operator[](int n_i)
{
	if (n_i<0 || n_i>m_nelem) n_i = 0;
	return m_v[n_i];
}
